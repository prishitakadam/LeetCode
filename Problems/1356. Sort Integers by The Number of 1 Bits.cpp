class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>>  bitCount;
        vector<int> sortedArr;
        
        for(auto const& x: arr)
            bitCount.push_back({bitset<64> (x).count(), x});
        
        sort(begin(bitCount), end(bitCount));
        
        for(auto itr=bitCount.begin(); itr!=bitCount.end(); ++itr)
            sortedArr.push_back(itr->second);
        
        return sortedArr;
    }
};
