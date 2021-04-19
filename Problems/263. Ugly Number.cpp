class Solution {
public:
    bool isUgly(int n) {
        if(n<=0){
            return false;
        }
        else{
            for(int i=2; i<=sqrt(n); i++){
                while(n%i == 0){
                    n = n/i;
                    if(i!= 2 && i!=3 && i!=5)
                        return false;
                }
            }
            
            if(n!= 2 && n!=3 && n!=5){
                if(n>2)
                    return false;
            }
        }
        
        return true;
    }
};
