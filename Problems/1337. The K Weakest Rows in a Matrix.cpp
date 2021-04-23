class Solution {
public:
    vector<int> getKWeakestRows(multimap<int, int> m, int k){
            vector<int> kWeakest;
            for (auto const &pair: m) {
                if(k > 0){
                    kWeakest.push_back(pair.second);
                    k -= 1;
                }
                else
                    break;
            }
            return kWeakest;
        }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int, int> countSoldiers;
        
        for(int i=0; i<mat.size(); i++)
            countSoldiers.insert({count(mat[i].begin(), mat[i].end(), 1), i});
        
        return getKWeakestRows(countSoldiers, k);
    }
};
