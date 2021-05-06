class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        int i=0, count=0;
        bool found = false;
        
        while(i<nums.size()){
            if(found == true && nums[i] != val)
                break;
            if(nums[i] == val){
                nums[i] = 0;
                count++;
                found = true;
            }
            i++;
        }
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        return nums.size()-count;
    }
};
