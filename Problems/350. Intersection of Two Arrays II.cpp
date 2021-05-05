class Solution {
public:
    vector<int> getIntersection(vector<int> n1, vector<int> n2){
        vector<int> intersection;
        int i=0, j=0;
        
        while(i<n1.size() && j<n2.size()){
            if(n1[i] == n2[j]){
                intersection.push_back(n1[i]);
                i++;
                j++;
            }
            else if(n1[i]<n2[j])
                i++;
            else
                j++;
        }
        return intersection;
    }
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        if(nums2.size()<nums1.size())
            return getIntersection(nums2, nums1);
        else
            return getIntersection(nums1, nums2);
    }
};
