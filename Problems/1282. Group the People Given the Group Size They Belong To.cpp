class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<pair<int, int>> indexes;
        vector<vector<int>> groups;
        vector<int> temp;
        int flag = 0;
        
        for(int i=0; i<groupSizes.size(); i++)
            indexes.push_back(make_pair(groupSizes[i], i));
        
        sort(indexes.begin(), indexes.end());
        
        for(auto it=indexes.begin(); it!=indexes.end(); it++){
            if(flag == 0){
                flag = it->first;
                if(it!=indexes.begin()){
                    groups.push_back(temp);
                    temp.clear();
                }
            }
            temp.push_back(it->second);
            flag -= 1;
        }
        groups.push_back(temp);
        return groups;
    }
};
