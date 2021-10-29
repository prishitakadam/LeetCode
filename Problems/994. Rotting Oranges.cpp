class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> rottenOranges;
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        int time = 0, fresh = 0;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1) fresh++;
                else if(grid[i][j] == 2) rottenOranges.push({i, j});
            }
        }
        
        if(fresh == 0)
            return 0;
    
        if(fresh > 0 && rottenOranges.empty())
            return -1;
        
        while(!rottenOranges.empty() && fresh > 0){
            int s = rottenOranges.size();
            for(int i=0; i<s; i++){
                pair<int, int> curr = rottenOranges.front();
                rottenOranges.pop();
                for(auto const& x: directions){
                    if(curr.first + x.first >= 0 && curr.first + x.first < grid.size() && curr.second + x.second >= 0  && curr.second + x.second < grid[0].size()){
                        if(grid[curr.first + x.first][curr.second + x.second] == 1){
                            grid[curr.first + x.first][curr.second + x.second] = 2;
                            rottenOranges.push({curr.first + x.first, curr.second + x.second});
                            fresh--;
                        }
                    }
                }
            }
            time++;
        }
        
        return (fresh > 0)? -1 : time;
    }
};
