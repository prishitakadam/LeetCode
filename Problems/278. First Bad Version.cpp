// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int getFirstBadVersion(int start, int end){
        int mid = start + (end - start)/2;
        if(isBadVersion(mid)){
            if(mid-1 >= 0){
                if(isBadVersion(mid-1))
                    return getFirstBadVersion(start, mid-1);
                else
                    return mid;
            }
            else
                return mid;
        }
        else
            return getFirstBadVersion(mid+1, end);
    }
    
    int firstBadVersion(int n) {
        return getFirstBadVersion(0, n);
    }
};
