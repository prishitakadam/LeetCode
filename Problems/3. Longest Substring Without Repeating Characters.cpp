class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int initialIdx = 0, maxLen = 0;
        map<char, int> substring;
        
        for(int i=0; i<s.size(); i++){
            if(!substring.empty() && substring.find(s[i]) != substring.end())
                initialIdx = max(initialIdx, substring[s[i]]);
            
            maxLen = max(maxLen, i - initialIdx + 1);
            substring[s[i]] = i+1;
        }
        return maxLen;
    }
};
