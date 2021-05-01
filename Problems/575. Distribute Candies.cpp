//Using Sort, O(nlogn), Beats 96.20%
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int unique = 1;
        sort(candyType.begin(), candyType.end());
        int* p = candyType.data();
        
        for(int i=0; i<candyType.size()-1; i++){
            if(p[i] != p[i+1])
                unique++;
        }
        
        if(unique < candyType.size()/2)
            return unique;
        else
            return candyType.size()/2;
    }
};


//Using Set
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
