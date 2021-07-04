class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0, maxReach = 0;
        while(i < nums.size() && i <= maxReach){
            maxReach = max(i + nums[i], maxReach);
            i++;
        }
        return i == nums.size();
    }
};
