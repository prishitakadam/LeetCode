class Solution {
public:

    int xorOperation(int n, int start) {
        if(n == 1)
            return start;
        else {
            int ans = start, i = 1;
            while(i < n){
                ans ^= (start + (2*i));
                i += 1;
            }
            
            return ans;
        }
    }
};
