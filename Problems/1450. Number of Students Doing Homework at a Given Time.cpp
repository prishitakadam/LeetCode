class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int len = startTime.size();
        int nos = 0;

        for(int i=0; i<len; i++){
            if(startTime[i]<=queryTime){
                if(endTime[i]>=queryTime){
                    nos += 1;
                }
            }
        }
        
        return nos;
    }
};
