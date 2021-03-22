class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int i = 0, j = 1;
        int* p = nums.data();
        int temp = p[0], sum = p[0];


        while(i < nums.size()-1){
            if(p[i] < p[j]){
                temp = temp + p[j];
                if(temp > sum){
                    sum = temp;
                }
            }
            else{
                temp = p[j];
            }

            i += 1;
            j += 1;
        }

        return sum;
    }
};
