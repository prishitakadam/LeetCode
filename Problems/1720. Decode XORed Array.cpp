class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> decodedArr;
        decodedArr.push_back(first);
        int temp = first;
        
        for(auto x: encoded){
            temp = x ^ temp;
            decodedArr.push_back(temp);
        }
        return decodedArr;
    }
};
