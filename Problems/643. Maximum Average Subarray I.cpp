class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max = 0, sum = 0;
        int* p = nums.data();
        if(nums.size() == 1)
            return 1.0*p[0];
        
        for(int i=0; i<k; i++)
            max += p[i];
        
        sum = max;
        for(int i=0, j=k; j<nums.size(); i++, j++){
            sum = sum - p[i] + p[j];
            if(max < sum)
                max = sum;
        }
        
        return max/k;
    }
};
