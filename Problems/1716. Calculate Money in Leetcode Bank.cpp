class Solution {
public:
    int totalMoney(int n) {
        int i = 0, total = 0;
        int money[] = {1, 2, 3, 4, 5, 6, 7};
        
        while(n != 0){
            if(n >= 7){
                for(auto const& x:money){
                        total += x+i;
                }
                i += 1;
                n -= 7;
            }
            else{
                for(int j=0; j<n; j++)
                    total += money[j] + i;
                n = 0;
            }
        }
        
        return total;
    }
};
