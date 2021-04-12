class Solution {
public:
    int ans = 0;
    int sum = 0;
    int prod = 1;

    int getAns(int n){

        if ((trunc(log10(n)) + 1) > 0){
            sum += n%10;
            prod *= n%10;
            getAns(n/10);
        }

        return prod-sum;
    }
    
    int subtractProductAndSum(int n) {
        return getAns(n);
    }
};
