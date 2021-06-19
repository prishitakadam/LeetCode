class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0, j=1;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        while(j<nums.size()){
            if(i%2 != 0 && nums[i]%2 == 0){
                while(j<nums.size()){
                    if(nums[j]%2!=0)
                        break;
                    else
                        j++;
                }
                swap(nums[i], nums[j]);
            }
            if(i%2 == 0 && nums[i]%2 != 0){
                while(j<nums.size()){
                    if(nums[j]%2==0)
                        break;
                    else
                        j++;
                }
                swap(nums[i], nums[j]);
            }
            
            i++;
            j = i + 1;
        }
        return nums;
    }
};
