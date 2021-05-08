class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int optimalSum = 0, i=piles.size()-2, k = piles.size()/3;
        sort(piles.begin(), piles.end());
        
        while(k>0){
            optimalSum += piles[i];
            i -= 2;
            k--;
        }
        
        return optimalSum;
    }
};
