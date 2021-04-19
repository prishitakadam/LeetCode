class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0, temp = 0;
        
        for(auto const& x: gain){
            temp += x;
            if(maxAltitude < temp)
                maxAltitude = temp;
        }
        
        return maxAltitude;
    }
};
