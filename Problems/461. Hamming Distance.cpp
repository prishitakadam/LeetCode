class Solution {
public:
    int hammingDistance(int x, int y) {
        int differentBitCount = 0, i = 0;
        
        string binX = bitset<64> (x).to_string();
        string binY = bitset<64> (y).to_string();
        
        while(i<binX.size()){
            if(binX[i] != binY[i])
                differentBitCount++;
            i++;
        }
        return differentBitCount;
    }
};
