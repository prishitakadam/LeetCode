class Solution {
public:
    int reverse(int x) {
        long long num = 0;
        bool negative = false;
        
        if(x < 0)
            negative = true, x = abs(x);
        
        while(x>0){
            num += x%10;
            x = x/10;
            num = num*10;
        }
        
        num = num/10;
        
        if(negative)
            num = num * -1;
        
        if(num < -2147483648 || num > 2147483647)
            return 0;
        else
            return num;
    }
};
