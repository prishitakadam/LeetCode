class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> transposeMatrix;
        
        for(int i=0; i<matrix[0].size(); i++){
            vector<int> temp;
            for(int j=0; j<matrix.size(); j++){
                temp.push_back(matrix[j][i]);
            }
            transposeMatrix.push_back(temp);
        }
        
        return transposeMatrix;
    }
};
