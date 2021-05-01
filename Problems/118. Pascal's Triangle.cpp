class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalsTriangle;
        
        if(numRows == 1)
            return {{1}};
        else if(numRows == 2)
            return {{1}, {1, 1}};
        else{
            pascalsTriangle.push_back({1});
            pascalsTriangle.push_back({1, 1});
            int pos = 1;
            numRows -= 2;
            
            while(numRows>0){
                vector<int> temp;
                temp.push_back(1);
                for(int i=0; i<pascalsTriangle[pos].size()-1; i++){
                    temp.push_back(pascalsTriangle[pos][i] + pascalsTriangle[pos][i+1]);
                }
                temp.push_back(1);
                pascalsTriangle.push_back(temp);
                pos++;
                numRows--;
            }
            return pascalsTriangle;
        }
    }
};
