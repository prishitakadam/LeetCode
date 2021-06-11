class Solution {
public:
    int minFlips(string target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int flip = 0;
        for(auto x: target){
            if(flip%2 != 0 && x == '0')
                flip++;
            else if(flip%2 == 0 && x == '1')
                flip++;
        }
        return flip;
    }
};
