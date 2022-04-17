class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int maxHeight = -1;
        vector<int> oceanViewBuildings;
        
        for(int i=heights.size()-1; i>=0; i--){
            if(heights[i] > maxHeight){
                oceanViewBuildings.push_back(i);
            }
            maxHeight = max(maxHeight, heights[i]);
        }
        
        reverse(oceanViewBuildings.begin(), oceanViewBuildings.end());
        
        return oceanViewBuildings;
    }
};
