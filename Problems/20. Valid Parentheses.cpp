class Solution {
public:
    bool isValid(string s) {
        stack<int> parentheses;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                parentheses.push(s[i]);
            else{
                if(!parentheses.empty()){
                    if((s[i] == ')' && parentheses.top() == '(') || (s[i] == '}' 
                    && parentheses.top() == '{') || (s[i] == ']' && parentheses.top() == '['))
                        parentheses.pop();
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        
        if(!parentheses.empty())
            return false;
        return true;
    }
};
