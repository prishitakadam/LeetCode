class Solution {
public:
    int count = 0;
    int getNumberOfMatches(int n){
        if(n == 1)
            return count;
        else if(n%2 == 0){
            count += n/2;
            return getNumberOfMatches(n/2);
        }
        else{
            count += (n-1)/2;
            return getNumberOfMatches(((n-1)/2) + 1);
        }
    }
    
    int numberOfMatches(int n) {
        return getNumberOfMatches(n);
    }
};
