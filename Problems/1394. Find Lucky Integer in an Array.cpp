class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1, i = 0, c;
        
        sort(arr.begin(), arr.end());
        
        while(i<arr.size()){
            c = count(arr.begin(), arr.end(), arr[i]);
            if(c == arr[i]){
                if(arr[i] > ans){
                    ans = arr[i];
                } 
            } 
            i += c;
        }
        return ans;
    }
};
