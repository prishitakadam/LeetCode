class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int> discountedPrices;
        int*p = prices.data();
        int j, len = prices.size();
        
        for(int i=0; i<len; i++){
            j = i + 1;
            while(j<len){
                if(p[j] <= p[i]){
                    discountedPrices.push_back((p[i] - p[j]));
                    break;
                }
                else if(j == (len-1)){
                    discountedPrices.push_back((p[i]));
                    break;
                }
                
                j += 1;
            }
        }
        
        discountedPrices.push_back(prices[(len-1)]);
        return discountedPrices;
    }
};
