class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        if(nums.size()==1)
            return {};
        else if(nums.size() == 2){
            if(nums[0] != nums[1])
                return {};
            else
                return {nums[0]};
        }
        else{
            vector<int> duplicateValues;
            sort(nums.begin(), nums.end());
            
            int i = 0;
            while(i<nums.size()-1){
                if(nums[i] == nums[i+1]){
                    duplicateValues.push_back(nums[i]);
                    i += 1;
                }
                i++;
            }
            return duplicateValues;
        }
    }
};
