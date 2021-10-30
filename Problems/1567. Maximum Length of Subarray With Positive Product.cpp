class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int start = 0, end = 0, len = 0, neg = 0;
        
        for(int i=0; i<nums.size(); i++){    
            if(nums[i] == 0){
                neg = 0;
                if(nums[start != 0]) len = max(len, end - start + 1);
                start = i+1, end =start;
            }
            
            if(nums[i] < 0)
                neg++;
            
            if(neg%2 == 0 && nums[i] != 0){
                end = i;
                len = max(max(1, len), end - start + 1);
            }
             
        }
        
        start = nums.size()-1, end = start, neg = 0;
        
        for(int i=nums.size()-1; i>=0; i--){    
            if(nums[i] == 0){
                neg = 0;
                if(nums[start] != 0) len = max(len, start - end + 1);
                start = i-1, end = start;
            }
            
            if(nums[i] < 0)
                neg++;
            
            if(neg%2 == 0 && nums[i] != 0){
                end = i;
                len = max(max(1, len), start - end + 1);
            }
             
        }
        
        return len;
    }
};
