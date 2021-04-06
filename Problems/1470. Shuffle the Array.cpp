class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> shufflenums;
        
        for(int i=0; i<n; i++){
            shufflenums.push_back(nums[i]);
            shufflenums.push_back(nums[i+n]);
        }
        
        return shufflenums;
        
    }
};
