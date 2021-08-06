class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> cumulativeSum;
        int sum = 0, count = 0;
        
        cumulativeSum.insert({0, 1});
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(cumulativeSum.find(sum - k) != cumulativeSum.end())
                count += cumulativeSum[sum - k];
            
            if(cumulativeSum.find(sum) != cumulativeSum.end())
                cumulativeSum[sum]++;
            else
                cumulativeSum.insert({sum, 1});
        }
        return count;
    }
};
