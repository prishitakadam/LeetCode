class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0, rightSum = accumulate(nums.begin(), nums.end(), 0);
        int* p = nums.data();
        
        rightSum -= p[0];
        if(leftSum == rightSum)
            return 0;

        for(int i=1; i<nums.size(); i++){
            leftSum += p[i-1];
            rightSum -= p[i];

            if(leftSum == rightSum)
                return i;
        }
        return -1;
    }
};
