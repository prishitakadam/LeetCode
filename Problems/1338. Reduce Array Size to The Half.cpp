class Solution {
public:
    int minSetSize(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> arrCount;
        int count = 1, numElements = 0, sum = 0,  j = 0;
        
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i] == arr[i+1])
                count++;
            else{
                arrCount.push_back(count);
                count = 1;
            }
        }
        arrCount.push_back(count);
        
        sort(arrCount.begin(), arrCount.end(), greater<int>());
        
        while(sum < arr.size()/2 && j<arrCount.size()){
            sum += arrCount[j];
            numElements++;
            j++;
        }
        
        return numElements;
    }
};
