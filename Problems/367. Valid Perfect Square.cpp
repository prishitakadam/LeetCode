class Solution {
public:
    
    bool getAns(int n, int i){
        if(n-i < 0)
            return false;
        else if(n-i == 0)
            return true;
        else
            return getAns(n-i, i+2);
    }
    
    bool isPerfectSquare(int num) {
        return getAns(num, 1);
    }
};
