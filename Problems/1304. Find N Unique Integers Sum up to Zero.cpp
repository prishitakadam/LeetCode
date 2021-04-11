class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> validint;
        int start = -1;

        if(n%2 != 0)
            validint.push_back(0);

        while(validint.size()<n){
            validint.push_back(start);
            validint.push_back(abs(start));
            start -= 1;
        }

        return validint;
            
    }
};
