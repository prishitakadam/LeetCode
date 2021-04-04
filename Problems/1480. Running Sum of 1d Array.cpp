class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int start = 0, sum = 0;
        int len = nums.size();
        vector<int> running_sum;

        for(int i=0; i<len; i++){

            sum += nums[i];
            running_sum.push_back(sum);

        }
        
        return running_sum;
        
    }
};
