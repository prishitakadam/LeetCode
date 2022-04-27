class Solution {
public:
    
    void dfs(int i, int j, vector<vector<int>>& grid){
        if(i<0 or j<0 or i==grid.size() or j==grid[0].size() or grid[i][j]==0)
            return;
        grid[i][j] = 0;
        dfs(i+1, j, grid);
        dfs(i-1, j, grid);
        dfs(i, j+1, grid);
        dfs(i, j-1, grid);
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid2.size();
        int m = grid2[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1 and grid1[i][j]==0){
                    dfs(i, j, grid2);
                }
            }
        }
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    dfs(i, j, grid2);
                    count++;
                }
            }
        }
        return count;
    }
};
