class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sortedSqrs(nums.size(), 0);
        int i=0, j = nums.size()-1, counter = nums.size()-1;
        
        while(i<=j){
            if(abs(nums[i]) < abs(nums[j]))
                sortedSqrs[counter] += pow(nums[j], 2), j--;
            else
                sortedSqrs[counter] += pow(nums[i], 2), i++;
            counter--;
        }
        return sortedSqrs;
    }
};
