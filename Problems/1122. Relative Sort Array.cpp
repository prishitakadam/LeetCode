class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> relativelySortedArray;
        
        for(int i=0; i<arr2.size(); i++){
            relativelySortedArray.insert(relativelySortedArray.end(), 
                                count(arr1.begin(), arr1.end(), arr2[i]), arr2[i]);
             replace(arr1.begin(), arr1.end(), arr2[i], -1);
        }
        
        sort(arr1.begin(), arr1.end());
        for(auto x: arr1){
            if(x != -1)
                relativelySortedArray.push_back(x);
        }
        return relativelySortedArray;
    }
};
