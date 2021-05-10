class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> singleNumberArray;
        int left = 0, right = 1;

        if(nums.size() == 2)
            return nums;
        
        while(right<nums.size()){
            if(nums[left] != nums[right]){
                if(right == nums.size()-1){
                    singleNumberArray.push_back(nums[left]);
                    singleNumberArray.push_back(nums[right]);
                    break;
                }
                else if(nums[right]!=nums[right+1]){
                    singleNumberArray.push_back(nums[left]);
                    singleNumberArray.push_back(nums[right]);
                    break;
                }
                else{
                    singleNumberArray.push_back(nums[left]);
                    left += 1;
                    right = left + 1;
                }
            }
            else{
                left += 2;
                right = left + 1;
            }
            if(left == nums.size()-1)
                singleNumberArray.push_back(nums[left]);
            
            if(singleNumberArray.size() == 2)
                break;
        }
        return singleNumberArray;
    }
};
