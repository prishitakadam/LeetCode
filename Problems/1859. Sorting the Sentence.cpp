class Solution {
public:
    string sortSentence(string s) {
        map<int, string> str;
        string temp, sortedSentence = "";
        int i = 0;
        
        while(i<s.size()){
            temp = "";
            while(!isdigit(s[i])){
                temp += s[i];
                i++;
            }
            
            str.insert({s[i], temp});
            i += 2;
        }
        
         for(auto it = str.begin(); it != str.end(); ++it ){
              sortedSentence += it->second + " ";
        }
        sortedSentence.erase(sortedSentence.size() - 1);
        
        return sortedSentence;
    }
};
