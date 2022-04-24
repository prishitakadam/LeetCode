class Solution {
public:
    int dfs(vector<vector<int>>& grid, int row, int col, int m, int n){
        int currArea = 0, currRow = 0, currCol = 0;
        stack<pair<int, int>> visited;
        visited.push(make_pair(row, col));
        grid[row][col] = 0;
        
        while(!visited.empty()){
            currRow = visited.top().first, currCol = visited.top().second;
            visited.pop();
            currArea++;
            
            if(currRow-1 >= 0 && grid[currRow-1][currCol] == 1){
                visited.push(make_pair(currRow-1, currCol)); 
                grid[currRow-1][currCol] = 0;
            }
            
            if(currCol-1 >= 0 && grid[currRow][currCol-1] == 1){
                visited.push(make_pair(currRow, currCol-1)); 
                grid[currRow][currCol-1] = 0;
            }
            
            if(currRow+1 < m && grid[currRow+1][currCol] == 1){
                visited.push(make_pair(currRow+1, currCol)); 
                grid[currRow+1][currCol] = 0;
            }
            
            if(currCol+1 < n && grid[currRow][currCol+1] == 1){
                visited.push(make_pair(currRow, currCol+1)); 
                grid[currRow][currCol+1] = 0;
            }
            
        }
        
        return currArea;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0, m=grid.size(), n=grid[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    maxArea = max(maxArea, dfs(grid, i, j, m, n));
                }
            }
        }
        
        return maxArea;
    }
};
