class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> nonOverlappingIntervals;    
        sort(intervals.begin(), intervals.end());
        
        int f = intervals[0][0], s = intervals[0][1];
        
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0] <= s)
                s = max(s, intervals[i][1]);
            else{
                nonOverlappingIntervals.push_back({f, s});
                f = intervals[i][0], s = intervals[i][1];
            }
        }
        
        nonOverlappingIntervals.push_back({f, s});
        return nonOverlappingIntervals;
    }
};
