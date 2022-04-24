class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int start, int end){
        int mid;
        while(start <= end){
            mid = start + (end-start)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                return binarySearch(nums, target, mid+1, end);
            else
                return binarySearch(nums, target, start, mid-1);
        }
        return -1;
    }
    
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int secondElement = 0;
        for(int i=0; i<numbers.size()-1; i++){
            secondElement = binarySearch(numbers, target-numbers[i], i+1, numbers.size()-1);
            if(secondElement != -1){
                ans.push_back(i+1);
                ans.push_back(secondElement+1);
                break;
            }
        }
        return ans;
    }
};
