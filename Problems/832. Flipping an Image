class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int len = image.size();
    
        for(int i=0; i<len; i++){
            reverse(image[i].begin(), image[i].end());
            for (auto& itr : image[i]) {
                itr = !itr;
            }
        }
        
        return image;
    }
};
