class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int n = wall.size(); 
        map<int, int> endPoints;
        
        for(int i=0; i<wall.size(); i++){
            int curr = 0;
            for(int j=0; j<wall[i].size()-1; j++){
                curr += wall[i][j];
                if(endPoints.find(curr) != endPoints.end())
                    endPoints[curr] += 1;
                else{
                    endPoints.insert({curr, 1});
                }
            }
        }
        
        int maxOccurrence = 0;
        for(auto it = endPoints.begin(); it != endPoints.end(); it++){
            int temp = it->second;
            maxOccurrence = max(maxOccurrence, temp);
        }
        
        return n-maxOccurrence;
    }
};
