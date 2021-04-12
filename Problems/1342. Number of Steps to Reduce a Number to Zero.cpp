class Solution {
public:
    
    int count = 0;
    
    int countSteps(int n){
        if(n == 0){
            return count;
        }
        else if(n%2 == 0){
            count += 1;
            countSteps(n/2);
        }
        else if(n%2 != 0){
            count += 1;
            countSteps(n-1);
        }
        
        return count;
    }
    
    int numberOfSteps(int num) {
        if(num == 0)
            return 0;
        else if(num == 1)
            return 1;
        else
            return countSteps(num);
    }
};
