class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans = 0, temp = 0;
        
        for(auto const& x: sticks)
            pq.push(x);
        
        while(pq.size()>1){
            temp += pq.top();
            pq.pop();
            temp += pq.top();
            pq.pop();
            ans += temp;
            pq.push(temp);
            temp = 0;
        }
        
        return ans;
    }
};
