class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) { 
        map<string, vector<string>> anagrams;
        vector<vector<string>> validGroups;
        
        for(string x: strs){
            string t = x;
            //Sort the current string and check whether or not its present in the map, if yes insert the current word into the corresponding anagram list, else insert the sorted word as key in the map and initialize its corresponding list with the current word
            sort(t.begin(), t.end());
            auto it = anagrams.find(t);
            if(it == anagrams.end())
                anagrams.insert({t, {x}});
            else
                it->second.push_back(x);
        }
        
        for(auto it=anagrams.begin(); it!=anagrams.end(); it++)
            validGroups.push_back(it->second);
        
        return validGroups;
    }
};
