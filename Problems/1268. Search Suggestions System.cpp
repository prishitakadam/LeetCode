bool lexicographicallyCompare(string a, string b){
    if (a.compare(0, b.size(), b) == 0 || b.compare(0, a.size(), a) == 0)
        return a.size() < b.size();
    else
        return a < b;
}

class Solution {
public:
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> suggestedProdList;
    
        for(int i=0; i<searchWord.size(); i++){
            suggestedProdList.push_back({});
        }
        
        sort(products.begin(), products.end(), lexicographicallyCompare);

        for(int i=0; i<products.size(); i++){
            for(int j=0; j<searchWord.size(); j++){
                if(products[i][j] == searchWord[j]){
                    if(suggestedProdList[j].size()<3)
                        suggestedProdList[j].push_back(products[i]);
                }
                else{
                    break;
                }
            }
        }
        
        return suggestedProdList;
    }
};
