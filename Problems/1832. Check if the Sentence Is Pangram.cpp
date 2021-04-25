class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> distinctAlphabets(sentence.begin(), sentence.end());
        
        if(distinctAlphabets.size() == 26)
            return true;
        else
            return false;
    }
};
