class Solution {
public:
    int maxAmountRobbed(vector<int>& nums, int n, int s){
        vector<int> robbed, notRobbed;
        if(s == 1){
            robbed.push_back(0);
            notRobbed.push_back(0);
        }
        robbed.push_back(nums[s]);
        notRobbed.push_back(0);
        
        for(int i=s+1; i<n; i++){
            if(i==s+1){
                robbed.push_back(nums[i]);
                notRobbed.push_back(robbed[i-1]);
            }
            else{
                robbed.push_back(nums[i] + max(notRobbed[i-1], robbed[i-2]));
                notRobbed.push_back(max(notRobbed[i-1], robbed[i-1]));
            }
        }
        return max(robbed[robbed.size()-1], notRobbed[notRobbed.size()-1]);
    }
    
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len == 1)
            return nums[0];
        else
            return max(maxAmountRobbed(nums, len-1, 0), maxAmountRobbed(nums, len, 1));
    }
};
