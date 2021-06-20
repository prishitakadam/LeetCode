class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int ascii;
        vector<int> target(26, 0), curr(26, 0), indices;
        
        if(s.size()<p.size())
            return {};
        
        for(int i=0; i<p.size(); i++)
            ascii = p[i] - NULL, target[ascii - 97]++;
        
        for(int i=0; i<p.size(); i++)
            ascii = s[i] - NULL, curr[ascii - 97]++;
        
        if(curr == target) indices.push_back(0);
        
        for(int i=1, j=p.size(); j<s.size(); i++, j++){
            ascii = s[i-1] - NULL, curr[ascii - 97]--;
            ascii = s[j] - NULL, curr[ascii - 97]++;
            if(curr == target) indices.push_back(i);
        }
        
        return indices;
        
    }
};
