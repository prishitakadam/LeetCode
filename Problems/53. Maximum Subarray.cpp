class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEnd = 0, maxSoFar = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            maxEnd += nums[i];
           
            if(maxSoFar < maxEnd)
                maxSoFar = maxEnd;
            
            if(maxEnd < 0)
                maxEnd = 0;
        }
        return maxSoFar;
    }
};
