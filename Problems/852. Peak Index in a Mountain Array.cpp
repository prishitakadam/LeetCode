class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0;
        
        while(i<arr.size()-1){
            if(arr[i] > arr[i+1])
                break;
            i++;
        }
        return i;
    }
};
