class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> cPos;
        vector<int> shortestPaths;
        int max, j;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == c)
                cPos.push_back(i);
        }
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == c)
                shortestPaths.push_back(0);
            else{
                j = 1;
                max = abs(i - cPos[0]);
                while(j<cPos.size()){
                    if(max > abs(i - cPos[j]))
                        max = abs(i - cPos[j]);
                    j++;
                }
                shortestPaths.push_back(max);
            }
        }
        return shortestPaths;
    }
};
