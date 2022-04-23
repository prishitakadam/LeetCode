class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col, int m, int n){
        stack<pair<int, int>> visited;
        visited.push(make_pair(row, col));
        int currRow = 0, currCol = 0;
        
        while(!visited.empty()){
            currRow = visited.top().first, currCol = visited.top().second;
            visited.pop();
            grid[currRow][currCol] = '0';
            
            if(currRow-1 >= 0 && grid[currRow-1][currCol] != '0')
                visited.push(make_pair(currRow-1, currCol));
            
            if(currCol-1 >= 0 && grid[currRow][currCol-1] != '0')
                visited.push(make_pair(currRow, currCol-1));
            
            if(currRow+1 < m && grid[currRow+1][currCol] != '0')
                visited.push(make_pair(currRow+1, currCol));
            
            if(currCol+1 < n && grid[currRow][currCol+1] != '0')
                visited.push(make_pair(currRow, currCol+1));
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int numIslands = 0, m=grid.size(), n=grid[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == '1'){
                    numIslands++;
                    dfs(grid, i, j, m, n);
                }
            }
        }
        
        return numIslands;
    }
};
