class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1)
            return 0;
        
        set<int> sortedNums;
        for(int x: nums){
            sortedNums.insert(x);
        }
        
        auto it = sortedNums.begin();
        int expected = *it+1, currCount = 1, maxCount = 0;
        
        for(it = sortedNums.begin(); it!= sortedNums.end(); ++it){
            if(*it != expected){
                maxCount = max(maxCount, currCount);
                currCount = 1;
                expected = *it+1;
            }
            else{
                currCount++;
                expected++;
            }
        }
        maxCount = max(maxCount, currCount);
        
        return maxCount;
    }
};
