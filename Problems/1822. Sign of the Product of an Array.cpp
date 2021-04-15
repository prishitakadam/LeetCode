//0ms Solution

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int start = 0, end = nums.size()-1, count = 0, ans = -1;
        
        while(end>=start){
            if(nums[end] == 0 || nums[start] == 0){
                ans = 0;
                count = -1;
                break;
            }
            else{
                if(end == start){
                    if(nums[end] < 0)
                        count += 1;
                }
                else{
                    if(nums[end] < 0)
                        count += 1;
                    if(nums[start] < 0)
                        count += 1;
                }
            }
            
            start += 1;
            end -= 1;
        }
        
        if(count%2 == 0 && count != -1)
            ans = 1;


        return ans;
    }
};

//Alternate Solution by using Sort

class Solution {
public:
    int arraySign(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0, count = 0, ans = -1;

        if(nums[0] > 0){
            ans = 1;
        }
        else if(nums[0] == 0){
            ans = 0;
        }
        else{
            
            while(i<nums.size()){
                if(nums[i] < 0){
                    count += 1;
                }
                else if(nums[i] == 0){
                    ans = 0;
                    count = - 1;
                    break;
                }
                else{
                    break;
                }

                i += 1;
            }
            
            if(count%2 == 0 && count != -1)
                ans = 1;
        }

        return ans;
    }
};
