//Optimized Method
//Constrain 1 <= lowLimit <= highLimit <= 10^5
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int boxes[46] = {0};
        for(int i = lowLimit; i<=highLimit; i++)
        {
            boxes[i%10 + i%100/10 + i%1000/100 + i%10000/1000 + i%100000/10000]++;
        }
        return *max_element(boxes, boxes+46);
    }
};





class Solution {

int getDigitSum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}
    
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> sumCount;
        int i = 0, max = 0, temp;
        
        while(lowLimit <= highLimit){
            sumCount.push_back(getDigitSum(lowLimit));
            lowLimit += 1;
        }
        
        sort(sumCount.begin(), sumCount.end());
        
        while(i<sumCount.size()){
            temp = count(sumCount.begin(), sumCount.end(), sumCount[i]);
            if(max < temp)
                max = temp;
            
            i += temp;
        }
        
        
        return max;
    }
};
