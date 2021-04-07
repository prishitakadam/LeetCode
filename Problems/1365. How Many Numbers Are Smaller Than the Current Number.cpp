class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> smallnumbers;
        int count;
        
        for(int i=0; i<nums.size(); i++){
            count = 0;
            for(int j=0; j<nums.size(); j++){
                if((i != j) && (nums[i] > nums[j])){
                    count += 1;
                }
            }
            
            smallnumbers.push_back(count);
        }
        
        
        
        return smallnumbers;
    }
};
