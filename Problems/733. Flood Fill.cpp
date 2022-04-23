class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int initialColor = image[sr][sc], m = image.size(), n = image[0].size();
        stack<pair<int, int>> visited;
        visited.push(make_pair(sr, sc));
        
        //         sr,sc
        //         0,1
        //1,0      1,1      1,2
        //         2,1
        while(!visited.empty()){
            int currSR = visited.top().first, currSC = visited.top().second;
            image[currSR][currSC] = newColor;
            visited.pop();
            
            //UP
            if(currSR-1 >= 0 && image[currSR-1][currSC] != newColor && image[currSR-1][currSC] == initialColor)
                visited.push(make_pair(currSR-1, currSC));
            
            //LEFT
            if(currSC-1 >= 0 && image[currSR][currSC-1] != newColor && image[currSR][currSC-1] == initialColor)
                visited.push(make_pair(currSR, currSC-1));
            
            //DOWN
            if(currSR+1 < m && image[currSR+1][currSC] != newColor && image[currSR+1][currSC] == initialColor)
                visited.push(make_pair(currSR+1, currSC));
            
            //LEFT
            if(currSC+1 < n && image[currSR][currSC+1] != newColor && image[currSR][currSC+1] == initialColor)
                visited.push(make_pair(currSR, currSC+1));
        }
        
        return image;
    }
};
