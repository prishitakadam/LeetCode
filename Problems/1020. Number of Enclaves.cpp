class Solution {
public:
    //Thought Process:
    //1. Use DFS to get connected land (island)
    //2. If any island does not have a land that is connected to the boundary of the grid, that means we cannot get of that island          and all the lands will be marked red.
    //3. Have a counter to get the current number of lands in the island and a bool to check if island has a bordering land or not.
    // Condition for border land : [0][*], [*][0], [m-1][*], [*][n-1] (* => 0 to m-1/n-1)
    
    int dfs(vector<vector<int>>& grid, int row, int col, int m, int n){
        int currRow = 0, currCol = 0, numLands = 0;
        bool borderLand = false;
        stack<pair<int, int>> visited;
        visited.push(make_pair(row, col));
        grid[row][col] = 0;
        
        
        while(!visited.empty()){
            currRow = visited.top().first;
            currCol = visited.top().second;
            visited.pop();
            numLands++;
            if(currRow == 0 || currRow == m-1 || currCol == 0 || currCol == n-1)
                borderLand = true;
            
            if(currRow-1 >= 0 && grid[currRow-1][currCol] == 1)
                visited.push(make_pair(currRow-1, currCol)), grid[currRow-1][currCol] = 0;
            
            if(currCol-1 >= 0 && grid[currRow][currCol-1] == 1)
                visited.push(make_pair(currRow, currCol-1)), grid[currRow][currCol-1] = 0;
            
            if(currRow+1 < m && grid[currRow+1][currCol] == 1)
                visited.push(make_pair(currRow+1, currCol)), grid[currRow+1][currCol] = 0;
            
            if(currCol+1 < n && grid[currRow][currCol+1] == 1)
                visited.push(make_pair(currRow, currCol+1)), grid[currRow][currCol+1] = 0;
        }
        
        if(borderLand)
            return 0;
        else
            return numLands;
        
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int totalEnclaves = 0, m = grid.size(), n = grid[0].size();
        
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    totalEnclaves += dfs(grid, i, j, m, n);
                }
            }
        }
        
        return totalEnclaves;
    }
};
