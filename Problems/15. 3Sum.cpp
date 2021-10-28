void getValidTriplets(vector<int>& nums, int i, vector<vector<int>>& validTriplets){
    int low = i+1, high = nums.size()-1;
    
    
    while(low<high){
        int sum = nums[i] + nums[low] + nums[high];
        if(sum > 0){
            --high;
        }
        else if(sum < 0){
            ++low;
        }
        else{
            validTriplets.push_back({nums[i], nums[low++], nums[high--]});
            while (low < high && nums[low] == nums[low - 1])
                    ++low;
        }
    }
}

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3)
            return {};
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> validTriplets;
        
        for(int i=0; i<nums.size() && nums[i] <= 0; ++i){
            if(i == 0 || nums[i-1] != nums[i])
                getValidTriplets(nums, i, validTriplets);
        }
        return validTriplets; 
    }
};
