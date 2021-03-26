class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        int* p = arr.data();
    
    for(int i=0; i<=arr.size()-3; i++){
        for(int j=i+1; j<=arr.size()-2; j++){
            if(abs(p[i] - p[j]) <= a){
                for(int k=j+1; k<=arr.size()-1; k++){
                    if(abs(p[j] - p[k]) <= b && abs(p[i] - p[k]) <= c){
                        count += 1;
                    }
                }
            }
        }
    }
        
        return count;
    }
};
