class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int iceCreamCount = 0, i = 0;
        
        sort(costs.begin(), costs.end());
        int* p = costs.data();
        
        while(i<costs.size()){
            if(coins>=p[i]){
                iceCreamCount += 1;
                coins -= p[i];
                i++;
            }
            else
                break;
        }
        
        return iceCreamCount;
    }
};
