class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        
        for(auto const& x: nums){
            if(x != first && x!= second && x!= third){
                if(x > second){
                    if(x > first)
                        third = second, second = first, first = x;
                    else
                        third = second, second = x;
                }
                else{
                    if(x > third)
                        third = x;
                }
            }
        }
        
        if(third != LONG_MIN) return third;
        else return max(first, second);
    }
};
