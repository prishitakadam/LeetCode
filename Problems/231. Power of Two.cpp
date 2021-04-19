class Solution {
public:
    bool isPowerOfTwo(int n) {
        vector<int> binary;
        
        while(n>0){
            binary.push_back(n%2);
            n = n/2;
        }
        
        if(accumulate(binary.begin(), binary.end(), 0) == 1)
            return true;
        else
            return false;
    }
};
