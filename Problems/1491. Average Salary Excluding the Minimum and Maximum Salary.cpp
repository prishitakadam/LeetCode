class Solution {
public:
    double average(vector<int>& salary) {
        auto minmax = minmax_element(salary.begin(), salary.end());
        return 1.0*(accumulate(salary.begin(), salary.end(), 0) - *minmax.first - *minmax.second)/(salary.size()-2);;
    }
};
