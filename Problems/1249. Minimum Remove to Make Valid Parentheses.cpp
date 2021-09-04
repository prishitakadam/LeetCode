class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int i=0, j=0;
        stack<string> validString;
        string temp = "";
        
        for(auto const& x: s){
            string str(1, x);
            if(str == ")"){
                while(!validString.empty() && validString.top() != "(")
                    temp += validString.top(), validString.pop();
                
                if(!validString.empty())
                    validString.pop(), validString.push(")" + temp + "(");
                else
                    validString.push(temp);
                temp = "";
            }
            else{
                validString.push(str);
            }
        }
        
        temp = "";
        while(!validString.empty()){
            if(validString.top() != "(")
                temp += validString.top();
            validString.pop();
        }
        
        reverse(temp.begin(), temp.end());
        
        return temp;
    }
};
