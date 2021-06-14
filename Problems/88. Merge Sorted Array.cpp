class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = nums1.size()-1, i=0;
        while(n>0){
            nums1[len] += nums2[i];
            len--, i++, n--;
        }
        
        sort(nums1.begin(), nums1.end());
    }
};
