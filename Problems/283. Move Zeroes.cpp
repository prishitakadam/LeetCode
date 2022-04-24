class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int currErased = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i - currErased] == 0){
                nums.erase(nums.begin() + i - currErased);
                currErased++;
                nums.push_back(0);
            }
        }
    }
};
