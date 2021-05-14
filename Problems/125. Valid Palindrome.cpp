class Solution {
public:
    bool isPalindrome(string s) {
        string str = "", revStr;
        
        for(auto const& x: s){
            if(isalpha(x))
                str += tolower(x);
            if(isdigit(x))
                str += x;
        }
        
        revStr = str;
        reverse(revStr.begin(), revStr.end());
        cout<<revStr<<" "<<str;
        
        if(revStr == str)
            return true;
        else
            return false;
    }
};
