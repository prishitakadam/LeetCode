class Solution {
public:
    int minOperations(int n) {
        int mid, begin, minop = 0;
    
        if(n%2 != 0){
            mid = (2*((n-1)/2)) + 1;
            begin = mid - 2;
        }
        else{
            mid = (2*(n/2));
            begin = mid - 1;
        }

        while(begin > 0){
            minop += (mid - begin);
            begin -= 2;
        }

        return minop;
    }
};
