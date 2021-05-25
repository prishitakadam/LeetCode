class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int max = 1, count = 1;
        
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                count += 1;
                if(max < count)
                    max = count;
            }
            else
                count = 1;
        }
        return max;
    }
};
