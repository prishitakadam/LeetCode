class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int p, count = 0;
        
        if(ruleKey == "type")
            p = 0;
        else if(ruleKey == "color")
            p = 1;
        else
            p = 2;
        
        for(int i=0; i<items.size(); i++){
            if(items[i][p] == ruleValue)
                count += 1;
        }
        
        return count;
    }
};
