class Solution {
public:
    bool judgeSquareSum(int c) {        
       int count;
        for(int i=2; i<=sqrt(c); i++){
            if(c%i == 0){
                count = 0;
                while(c%i == 0){
                    count += 1;
                    c = c/i;
                }
                if((i%4 == 3) && (count%2 != 0))
                    return false;
            }
        }
        return c%4 != 3;
    }
};
