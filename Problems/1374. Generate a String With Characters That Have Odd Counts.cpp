class Solution {
public:
    string generateTheString(int n) {
        string validString = "";
        
        if(n%2 == 0){
            validString += 'a';
            validString.insert(validString.end(), n-1, 'b');
        }
        else
            validString.insert(validString.end(), n, 'a');
        
        return validString;
    }
};
