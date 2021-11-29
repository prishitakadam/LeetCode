class Solution {
public:
    void getPath(vector<vector<int>> graph, vector<vector<int>>& paths, vector<int>& curr, int i){
        curr.push_back(i);
        if(i == graph.size()-1)
            paths.push_back(curr);
        else{
            for(auto const& x: graph[i])
                getPath(graph, paths, curr, x);
        }
        curr.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> paths;
        vector<int> curr;
        getPath(graph, paths,curr, 0);
        return paths;
    }
};
