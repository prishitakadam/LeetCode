class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0, ele1 = 0, ele2 = 0, len = nums1.size()+nums2.size();
        bool flagI = false, flagJ = false;
        
        if(len == 1){
            if(nums1.size()==1)
                return nums1[0];
            else
                return nums2[0];
        }
        
        if(nums1.empty())
            flagI = true;
        if(nums2.empty())
            flagJ = true;
        
        if(len%2 != 0)
            len--;
        
        for(int x=0; x<=len/2; x++){
            ele2 = ele1;
            if(flagI == false && flagJ == false){
                if(nums1[i] <= nums2[j]){
                    ele1 = nums1[i];
                    i++;
                }
                else{
                    ele1 = nums2[j];
                    j++;
                }
            }
            else if(flagI == true && flagJ == false){
                ele1 = nums2[j];
                j++;
            }
            else if(flagJ == true && flagI == false){
                ele1 = nums1[i];
                i++;
            }
            else
                break;
            
            if(i == nums1.size())
                flagI = true;
            
            if(j == nums2.size())
                flagJ = true;
        }

        if((nums1.size()+nums2.size())%2 != 0)
            return ele1;
        else
            return 1.0*(ele1+ele2)/2;
        
    }
};
