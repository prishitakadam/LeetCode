class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size() < 5)
            return 0;
        
        sort(nums.begin(), nums.end());
        int minDiff = nums[nums.size()-1] - nums[0];
        
        for(int i=0, j=nums.size()-4; i<=3; i++, j++)
            minDiff = min(minDiff, nums[j] - nums[i]);
        
        return minDiff;
        
    }
};
