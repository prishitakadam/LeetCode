class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> sorted(A.size(), 0);
        int start = 0, end = A.size()-1;
        
        for(auto const& x: A){
            if(x%2 == 0){
                sorted[start] += x;
                start += 1;
            }
            else{
                sorted[end] += x;
                end -= 1;
            }
        }
        
        return sorted;
    }
};
