class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int, int>> boxPairs;
        int maxUnits = 0, i = boxTypes.size()-1;
        
        for(auto const& x: boxTypes)
            boxPairs.push_back(make_pair(x[1], x[0]));
        
        sort(boxPairs.begin(), boxPairs.end());
        
        while(truckSize != 0 && i>=0){
            if(boxPairs[i].second > truckSize){
                maxUnits += (truckSize * boxPairs[i].first);
                break;
            }
            else{
                maxUnits += (boxPairs[i].second * boxPairs[i].first);
                truckSize -= boxPairs[i].second;
            }
            i--;
        }
        
        return maxUnits;
    }
};
