class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        priority_queue<int,vector<int>,greater<int>> pq;
        int minRooms=1;

        for (auto interval : intervals) {
 
            if (pq.empty())
                pq.push(interval[1]);
            
            else if (pq.top() <= interval[0]) {
                pq.pop();
                pq.push(interval[1]);
            }

            else {
                pq.push(interval[1]);
                minRooms++;
            }
        }
        return minRooms;
    }
};
