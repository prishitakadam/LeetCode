class Solution {
public:
    bool halvesAreAlike(string s) {
        
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int len = s.size()/2;
        int c1 = 0;
        int c2 = 0;
        
        for(int i=0; i<len; i++){
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end())
                c1 += 1;
            if(find(vowels.begin(), vowels.end(), s[i+len]) != vowels.end())
                c2 += 1;
        }
        
        if(c1 == c2)
            return true;
        else
            return false;
    }
};
