class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0;
        string ans = "";
        
        while(k>-1 && i<s.size()){
            if(isspace(s[i]))
                k--;
            if(k == 0)
                break;
            ans+= s[i];
            i++;
        }
        
        return ans;
    }
};
