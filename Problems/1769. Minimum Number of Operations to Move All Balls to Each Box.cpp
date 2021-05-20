class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> minOperationsRequired(boxes.size(), 0);
        int count;
        
        for(int i=0, j=boxes.size()-1; i<boxes.size()-1, j>0; i++, j--){
            if(boxes[i] == '1'){
                count = 1;
                for(int x=i+1; x<boxes.size(); x++){
                    minOperationsRequired[x] += count;
                    count += 1;
                }
            }
            if(boxes[j] == '1'){
                count = 1;
                for(int y=j-1; y>=0; y--){
                    minOperationsRequired[y] += count;
                    count += 1;
                }
            }
        }
        return minOperationsRequired;
    }
};
