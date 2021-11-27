class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> rob, notRob;
        
        rob.push_back(nums[0]);
        notRob.push_back(0);
        
        int n = nums.size();
        
        for(int i=1; i<n; i++){
            if(i==1){
                rob.push_back(nums[i]);
                notRob.push_back(rob[i-1]);
            }
            else{
                rob.push_back(nums[i] + max(notRob[i-1], rob[i-2]));
                notRob.push_back(max(notRob[i-1], rob[i-1]));
            }
        }
        return(max(rob[n-1], notRob[n-1]));
    }
};
