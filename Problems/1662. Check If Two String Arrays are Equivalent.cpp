class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0, j = 0;
        string a1 = "", a2 = "";
        bool ans = true;
        
        while(i<word1.size() || j<word2.size()){
            
            if(i<word1.size()){
                a1 += word1[i];
                i += 1;
            }
            if(j<word2.size()){
                a2 += word2[j];
                j += 1;
            }
        }
        
         if(a1 != a2){
                ans = false;
        }
        
        return ans;
    }
};
