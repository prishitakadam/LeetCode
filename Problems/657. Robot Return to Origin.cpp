class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> movesCount = {0, 0};
        
        for(auto const& x: moves){
            if(x == 'U')
                movesCount[0]++;
            else if(x == 'D')
                movesCount[0]--;
            else if(x == 'L')
                movesCount[1]++;
            else if(x == 'R')
                movesCount[1]--;
        }
        
        if(movesCount[0] == 0 && movesCount[1] == 0)
            return true;
        else
            return false;
    }
};
