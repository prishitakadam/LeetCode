class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        sort(A.begin(), A.end());
        int* p = A.data();
        int i = 0, count = 1, repeatedNum = 0;
        
        while(i<A.size()-1){
            if(p[i] == p[i+1])
                count++;
            else{
                if(count == A.size()/2){
                    repeatedNum = p[i];
                    break;
                }
                count  = 1;
            }
            i++;
        }
        
        if(count == A.size()/2)
                    repeatedNum = p[i];
        
        return repeatedNum;
    }
};
