class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        multimap<int, char> stringSeq;
        string restoredString = "";
        
        for(int i=0; i<indices.size(); i++){
            stringSeq.insert({indices[i], s[i]});
        }
        
        for(auto itr = stringSeq.begin(); itr != stringSeq.end(); ++itr){
            restoredString += itr->second;
        }
        return restoredString;
    }
};
