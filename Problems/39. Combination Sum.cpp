class Solution {
public:
    void getCombinations(vector<int>& cand, int i, int n, vector<vector<int>>& combinations, int sum, vector<int> currComb){
        if(sum == 0){
            combinations.push_back(currComb);
            return;
        }
        if(i>=n)
            return;
        if(cand[i] <= sum){
            currComb.push_back(cand[i]);
            getCombinations(cand, i, n, combinations, sum-cand[i], currComb);
            currComb.pop_back();
        }
        getCombinations(cand, i+1, n, combinations, sum, currComb);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combinations;
        vector<int> currComb;
        getCombinations(candidates, 0, candidates.size(), combinations, target, currComb);
        return combinations;
    }
};
