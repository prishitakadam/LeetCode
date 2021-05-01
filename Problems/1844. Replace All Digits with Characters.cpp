class Solution {
public:
    string replaceDigits(string s) {
        map<char, int> alphabets = {{'a', 0}, {'b', 1}, {'c', 2}, {'d', 3}, {'e', 4}, {'f', 5}, {'g', 6}, {'h', 7}, {'i', 8}, {'j', 9},
                                   {'k', 10}, {'l', 11}, {'m', 12}, {'n', 13}, {'o', 14}, {'p', 15}, {'q', 16}, {'r', 17}, {'s', 18}, 
                                    {'t', 19}, {'u', 20}, {'v', 21}, {'w', 22}, {'x', 23}, {'y', 24}, {'z', 25}};
        vector<char> alphas = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 
                              'v', 'w', 'x', 'y', 'z'};
        
        string replacedDigits = "";
        int temp = 0, val = 0;
        
        for(int i=0; i<s.size(); i+=2){
            if(i == s.size()-1)
                replacedDigits += s[i];
            else{
                replacedDigits += s[i];
                temp = alphabets.at(s[i]) + (s[i+1] - '0');
                replacedDigits += alphas[temp];
            }
        }
        return replacedDigits;
    }
};
