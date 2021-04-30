class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> allDestinations;
        vector<string> toDestination;
        string dest;
        int j = 0;
        
        for(int i=0; i<paths.size(); i++){
            allDestinations.push_back(paths[i][0]);
            allDestinations.push_back(paths[i][1]);
            toDestination.push_back(paths[i][1]);
        }
        
        while(j<toDestination.size()){
            if(count(allDestinations.begin(), allDestinations.end(), toDestination[j]) == 1){
                dest = toDestination[j];
                break;
            }
            j++;
        }
        return dest;
    }
};
