class Solution {
public:
    int firstOccurrence(vector<int>& nums, int target){
        int low = 0, high = nums.size()-1, mid = 0;
        
        while(low<=high){
            mid = low + (high - low)/2;
            if((mid == 0 || nums[mid-1] < target) && (nums[mid] == target))
                return mid;
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
            
        }
        return -1;
    }
    
    int lastOccurrence(vector<int>& nums, int target){
        int low = 0, high = nums.size()-1, mid = 0;
        
        while(low<=high){
            mid = low + (high - low)/2;
            if((mid == nums.size()-1 || nums[mid+1] > target) && (nums[mid] == target))
                return mid;
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
            
        }
        return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> positions = {-1, -1};
        
        positions[0] = firstOccurrence(nums, target);
        positions[1] = lastOccurrence(nums, target);
        
        return positions;
    }
};
