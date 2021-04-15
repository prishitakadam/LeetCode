class Solution {
public:
    
    int getFib(int n){
        if(n <= 1){
            return n;
        }
        else{
            return getFib(n-1) + getFib(n-2);
        }
    }
    
    int fib(int n) {
        return getFib(n);
    }
};
