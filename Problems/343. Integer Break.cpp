class Solution {
public:
    
    int elem = 1;
    int temp = elem;
    int tempProd = temp;
    int maxprod = 0;

    int maxProduct(int num, int len, int elem, int temp){

        if(elem > len){
            return maxprod;
        }
        else{

            if(temp <= num){
                if((num-temp)<num){
                    if((tempProd * (num - temp)) > maxprod){
                        maxprod = tempProd * (num - temp);
                    }

                    temp += elem;
                    tempProd *= elem;
                    if(temp > num){
                        elem += 1;
                        temp = elem;
                        tempProd = temp;
                    }
                    maxProduct(num, len, elem, temp);
                }
            }
        }

        return maxprod;

    }
    
    int integerBreak(int n) {
        int len, ans;
    
        if(n%2 == 0)
            len = n/2;
        else
            len = (n-1)/2;

        ans = maxProduct(n, len, elem, temp);
        return ans;
    }
};
