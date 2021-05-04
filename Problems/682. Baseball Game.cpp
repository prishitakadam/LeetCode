class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> points;
        
        for(int i=0; i<ops.size(); i++){
            if(ops[i] == "C")
                points.pop_back();
            else if(ops[i] == "D")
                points.push_back(points[points.size()-1] * 2);
            else if(ops[i] == "+")
                points.push_back(points[points.size()-1] + points[points.size()-2]);
            else
                points.push_back(stoi(ops[i]));
        }
        return accumulate(points.begin(), points.end(), 0);
    }
};
