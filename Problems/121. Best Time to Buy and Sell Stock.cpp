class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maximumProfit = 0;  
        for(auto x: prices){
            minPrice = min(minPrice, x);
            maximumProfit = max(maximumProfit, x-minPrice);
        }
        return maximumProfit;
    }
};
