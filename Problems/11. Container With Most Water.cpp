class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1, leftMax = 0, rightMax = 0, maxContainedWater = 0;
        
        while(left<right){
            if(height[left] < height[right]){
                if(height[left] > leftMax){
                    leftMax = height[left];
                    maxContainedWater = max(maxContainedWater, min(height[left], height[right]) * (right - left));
                }
                left++;
            }
            else{
                if(height[right] > rightMax){
                    rightMax = height[right];
                    maxContainedWater = max(maxContainedWater, min(height[left], height[right]) * (right - left));
                }
                right--;
            }
        }
        return maxContainedWater;
    }
};
