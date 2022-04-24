class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int row, int col, int m, int n){
        //[0][*], [*][0], [m-1][*], [*][n-1]
        int currRow = 0, currCol = 0;
        bool isSurrounded = true;
        stack<pair<int, int>> visited;
        visited.push(make_pair(row, col));
        grid[row][col] = -1;
        
        if(row == 0 || row == m-1 || col == 0 || col == n-1)
            isSurrounded = false;
        
        while(!visited.empty()){
            currRow = visited.top().first, currCol = visited.top().second;
            visited.pop();
            
            if(currRow-1 >= 0 && grid[currRow-1][currCol] == 0){
                if(currRow-1 == 0){ isSurrounded = false;}
                visited.push(make_pair(currRow-1, currCol));
                grid[currRow-1][currCol] = -1;
            }
            
            if(currCol-1 >= 0 && grid[currRow][currCol-1] == 0){
                if(currCol-1 == 0){ isSurrounded = false;}
                visited.push(make_pair(currRow, currCol-1));
                grid[currRow][currCol-1] = -1;
            }
            
            if(currRow+1 < m && grid[currRow+1][currCol] == 0){
                if(currRow+1 == m-1){ isSurrounded = false;}
                visited.push(make_pair(currRow+1, currCol));
                grid[currRow+1][currCol] = -1;
            }
            
            if(currCol+1 < n && grid[currRow][currCol+1] == 0){
                if(currCol+1 == n-1){ isSurrounded = false;}
                visited.push(make_pair(currRow, currCol+1));
                grid[currRow][currCol+1] = -1;
            }
        }
        
        return isSurrounded;
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int noSurroundedIslands = 0, m = grid.size(), n = grid[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 0 && dfs(grid, i, j, m, n)){
                    noSurroundedIslands++;
                }
            }
        }
        
        return noSurroundedIslands;
    }
};
