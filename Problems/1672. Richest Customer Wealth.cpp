class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0, temp;
        
        for(int i=0; i<accounts.size(); i++){
            temp = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            if(max_wealth < temp){
                max_wealth = temp;
            }
        }
        
        return max_wealth;
    }
};
