class Solution {
public:
    string toLowerCase(string str) {
        string lowerCase = "";
        
        for(auto const& x: str){
            if(int(x) < 91 && int(x) > 64)
                lowerCase += string(1, char((int(x) + 32)));
            else
                lowerCase += x;
        }
        return lowerCase;
    }
};
