class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        if(arr[0] != 1)
            arr[0] = 1;
        
        for(int i = 0; i<arr.size()-1; i++){
            if(arr[i+1] - arr[i] > 1)
                arr[i+1] = arr[i] + 1;
        }
        
        return arr[arr.size()-1];
    }
};
