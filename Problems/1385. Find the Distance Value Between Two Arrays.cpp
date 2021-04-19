class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        bool found;
        for(int i=0; i<arr1.size(); i++){
            found = false;
            for(int j=0; j<arr2.size(); j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    found = true;
                    break;
                }
            }
            
            if(found != true)
                count += 1;
        }
        
        return count;
    }
};
