class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascalsTriangle;
        
        if(rowIndex == 0)
            return {1};
        else if(rowIndex == 1)
            return {1, 1};
        else{
            pascalsTriangle.push_back({1});
            pascalsTriangle.push_back({1, 1});
            int pos = 1;
            rowIndex -= 1;
            
            while(rowIndex>0){
                vector<int> temp;
                temp.push_back(1);
                for(int i=0; i<pascalsTriangle[pos].size()-1; i++){
                    temp.push_back(pascalsTriangle[pos][i] + pascalsTriangle[pos][i+1]);
                }
                temp.push_back(1);
                pascalsTriangle.push_back(temp);
                pos++;
                rowIndex--;
            }
            return pascalsTriangle[pascalsTriangle.size()-1];
        }
    }
};
