class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end(), greater<int> ());
        int i=0, j=1;
        
        while(stones.size() != 1 && !stones.empty()){
            if(stones[i] > stones[j]){
                stones[i] -= stones[j];
                stones[j] = 0;
            }
            else{
                stones[i] = 0;
                stones[j] = 0;
            }
            sort(stones.begin(), stones.end(), greater<int> ());
            stones.erase(remove(begin(stones), end(stones), 0), end(stones));
        }
        return stones[0];
    }
};
