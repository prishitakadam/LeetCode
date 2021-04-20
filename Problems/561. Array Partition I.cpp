class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxSum = 0;
        
        for(int j=nums.size()-2; j>=0; j = j - 2)
            maxSum += nums[j];
        
        return maxSum;
        
    }
};
