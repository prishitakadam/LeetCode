class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int sum = 0;
        vector<int> row(m);
        vector<int> column(n);

        for(auto const& x: indices){
            row[x[0]] += 1;
            column[x[1]] += 1;

        }

       for(auto const& i: row){
           for(auto const& j: column){
               if((i+j) % 2 != 0){
                   sum += 1;
               }
           }
       }

        return sum;
    }
};
