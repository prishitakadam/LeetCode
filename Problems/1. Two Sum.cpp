class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> validIndices;
        int i = 0, j;
        bool found = false;
        
        while(i<nums.size() - 1 && !found){
            if(std::find(nums.begin(), nums.end(), (target - nums[i])) != nums.end()){
                j = i + 1;
                while(j<nums.size() && !found){
                    if(nums[j] == (target - nums[i])){
                        validIndices.push_back(i);
                        validIndices.push_back(j);
                        found = true;
                    }
                    
                    j += 1;
                }
            }
            
            i += 1;
        }
        
        return validIndices;
        
    }
};
