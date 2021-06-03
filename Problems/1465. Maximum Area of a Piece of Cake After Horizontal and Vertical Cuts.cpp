class Solution {
public:
    long getMaxDistance(int s, vector<int> cuts){
        sort(cuts.begin(), cuts.end());
        int maxDistance = cuts[0];
        for(int i=0; i<cuts.size()-1; i++){
            if((cuts[i+1] - cuts[i]) > maxDistance) 
                maxDistance = cuts[i+1] - cuts[i];
        }
        if((s - cuts[cuts.size()-1]) > maxDistance)
            maxDistance = s - cuts[cuts.size()-1];
        return maxDistance;
    }
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        long modulo = 1000000007;
        long maxArea = 0;
        
        long hDistance = getMaxDistance(h, horizontalCuts);
        long vDistance = getMaxDistance(w, verticalCuts);
        
        maxArea = hDistance * vDistance;
        
        return maxArea % modulo;
    }
};
