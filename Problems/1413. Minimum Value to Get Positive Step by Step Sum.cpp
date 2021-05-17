class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startValue = 0, totalSum = 0;
        
        if(nums[0] < 0)
            startValue = abs(nums[0]) + 1;
        else
            startValue = 1;
        
        totalSum += startValue;
        
        for(int i=0; i<nums.size(); i++){
            totalSum += nums[i];
            
            if(totalSum <= 0){
                startValue += abs(totalSum) + 1;
                totalSum = 1;
            }
            
        }
        return startValue;
    }
};

