class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergedString;
        int i=0;
        
        while(i<word1.size() || i<word2.size()){
            if(i<word1.size())
                mergedString += word1[i];
            
            if(i<word2.size())
                mergedString += word2[i];
            
            i++;
            
        }
        return mergedString;
    }
};
