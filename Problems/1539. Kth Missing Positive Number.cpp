class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=1, i=0;
        
        while(i<arr.size()){   
            if(n < arr[i]){
                while(n < arr[i]){
                    k--;
                    if(k == 0)
                        break;
                    n++;
                }
            }
            if(k == 0)
                break;
            else{
                i++;
                n++;
            }
        }
        
        if(k>0)
            return arr[arr.size()-1] + k;
        else
            return n;
    }
};
