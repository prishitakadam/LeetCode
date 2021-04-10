class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        int* p = nums.data();
        
        for(int i=0; i<nums.size(); i++){
            if(count(nums.begin(), nums.end(), p[i]) == 1)
                sum += p[i];
        }
        
        return sum;
    }
};
