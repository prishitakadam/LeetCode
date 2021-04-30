class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        bool ans = true;
        vector<int> occurences;
        int i = 0;
        
        sort(arr.begin(), arr.end());
        while(i<arr.size()){
            if(count(occurences.begin(), occurences.end(), count(arr.begin(), arr.end(), arr[i])) == 1){
                ans = false;
                break;
            }
            else{
                occurences.push_back(count(arr.begin(), arr.end(), arr[i]));
                i += count(arr.begin(), arr.end(), arr[i]);
            }
        }
        return ans;
    }
};
