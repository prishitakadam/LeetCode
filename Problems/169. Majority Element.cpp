class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0, max;
        
        while(i<nums.size()){
            if(count(nums.begin(), nums.end(), nums[i]) > nums.size()/2){
                max = nums[i];
                break;
            }
            i += count(nums.begin(), nums.end(), nums[i]);
        }
        return max;
    }
};
