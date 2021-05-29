class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max = 0;
        for(int i=0, j=nums.size()-1; i<j; i++, j--)
            if((nums[i] + nums[j]) > max) max = nums[i] + nums[j];
        
        return max;
    }
};
