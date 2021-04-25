class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> distinctCandyTypes(candyType.begin(), candyType.end());
        int len = candyType.size()/2;
        
        if(distinctCandyTypes.size() < len)
            return distinctCandyTypes.size();
        else
            return len;
    }
};
