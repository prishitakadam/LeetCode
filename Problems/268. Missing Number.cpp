class Solution {
public:
    int missingNumber(vector<int>& nums) {
        auto minmax = minmax_element(nums.begin(), nums.end());
        int diff = (*minmax.second * (*minmax.second + 1))/2 - accumulate(nums.begin(), nums.end(), 0);
        
        if(diff>0)
            return diff;
        else{
            if(*minmax.first == 0)
                return *minmax.second + 1;
            else
                return 0;
        }
        
    }
};
