class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, countZero = 0;
        vector<int> productArr;
        
        for(auto const& x: nums){
            if(x == 0)
                countZero += 1;
            else{
                product = product * x;
            }
        }
        
        if(countZero>1){
            productArr.insert(productArr.end(), nums.size(), 0);
        }
        else if(countZero == 1){
            for(auto const& x: nums){
                if(x == 0)
                    productArr.push_back(product);
                else
                    productArr.push_back(0);
            }
        }
        else{
            for(auto const& x: nums){
                productArr.push_back(product/x);
            }
        }
        return productArr;
    }
};
