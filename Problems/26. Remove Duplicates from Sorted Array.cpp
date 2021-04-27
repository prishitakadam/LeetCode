class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(!nums.empty()){
            int i=0, j=1, found = 0;
            if(count(nums.begin(), nums.end(), 0) > 0)
                found = 1;
            
            while(j<nums.size()){
                if(nums[i] == nums[j]){
                    nums[j] = 0;
                    j += 1;
                }
                else{
                    i = j;
                    j = i + 1;
                }
            }

            nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());

            if(found == 1){
                nums.push_back(0);
                sort(nums.begin(), nums.end());
                return nums.size();
            }
            else
                return nums.size();
        }
        else
            return nums.size();
    }
};
