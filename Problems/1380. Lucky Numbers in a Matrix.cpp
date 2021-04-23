class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<vector<int>> columns;
        vector<int> luckyNumbers;
        
        for(int i=0; i<matrix[0].size(); i++){
            vector<int> temp;
            for(int j=0; j<matrix.size(); j++)
                temp.push_back(matrix[j][i]);
            columns.push_back(temp);
        }
        
        for(int i=0; i<matrix.size(); i++){
            int minIndex = min_element(matrix[i].begin(), matrix[i].end()) - matrix[i].begin();
            if(matrix[i][minIndex] == *max_element(columns[minIndex].begin(), columns[minIndex].end()))
                luckyNumbers.push_back(matrix[i][minIndex]);
        }
        return luckyNumbers;
    }
};
