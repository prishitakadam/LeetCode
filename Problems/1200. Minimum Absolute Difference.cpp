class Solution {
public:
    int gerMinDiff(vector<int> arr){
        int minDiff = abs(arr[1] - arr[0]);
        for(int i=1; i<arr.size()-1; i++){
            if(abs(arr[i+1] - arr[i]) < minDiff)
                minDiff = abs(arr[i+1] - arr[i]);
        }
        return minDiff;
    }
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> validPairs;
        int minDiff;
        
        sort(arr.begin(), arr.end());
        minDiff = gerMinDiff(arr);
        
        for(int i=0; i<arr.size()-1; i++){
            if(abs(arr[i+1] - arr[i]) == minDiff){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                validPairs.push_back(temp);
            }
        }
        return validPairs;
    }
};
