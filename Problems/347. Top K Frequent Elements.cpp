class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> counter;
        multimap<int, int, greater<int> > frequency;
        vector<int> topFrequent;
        
        for(auto const& x: nums){
            auto it = counter.find(x);
            if(it != counter.end()){
                int temp = counter[x] + 1;
                counter.erase(it);
                counter.insert({x, temp});
            }
            else
                counter.insert({x, 1});
        }
        
       for(auto it=counter.begin(); it != counter.end(); it++){
            frequency.insert({it->second, it->first});
        }
        
        auto it = frequency.begin();
        for(int i=0; i<k; i++){
            topFrequent.push_back(it->second);
            it++;
        }
        
        return topFrequent;
    }
};
