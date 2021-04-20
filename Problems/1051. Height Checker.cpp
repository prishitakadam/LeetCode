class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> sheights = heights;
        sort(sheights.begin(), sheights.end());
        int count = 0;
        
        for(int i=0; i<heights.size(); i++){
            if(heights[i] != sheights[i])
                count += 1;
        }
       
        return count;
    }
};
