class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())
            return 0;
        
        vector<int> left, right;
        int trappedWater = 0, maxElement = 0;
        
        for(int i=0; i<height.size(); i++){
            if(height[i] > maxElement)
                maxElement = height[i];
            left.push_back(maxElement);
        }
        
        maxElement = 0;
        for(int i=height.size()-1; i>=0; i--){
            if(height[i] > maxElement)
                maxElement = height[i];
            right.push_back(maxElement);
        }
        
        reverse(right.begin(), right.end());
        
        for(int i=0; i<height.size(); i++)
            trappedWater += min(left[i], right[i]) - height[i];
        
        return trappedWater;
    }
};
