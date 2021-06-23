class Solution {
public:
    void getPermutations(vector<int>& nums, vector<vector<int>>& permutations, int i, int n){
        if(i == n-1){
            permutations.push_back(nums);
            return;
        }
        for(int j=i; j<n; j++){
            swap(nums[i], nums[j]);
            getPermutations(nums, permutations, i+1, n);
            swap(nums[i], nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> permutations;
        getPermutations(nums, permutations, 0, nums.size());
        return permutations;
    }
};
