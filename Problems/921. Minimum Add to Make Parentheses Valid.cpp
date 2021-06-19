class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> parentheses;
        int minAdd = 0;
        
        for(auto const& x: s){
            if(x == '(')
                parentheses.push(x);
            else{
                if(!parentheses.empty()){
                    if(parentheses.top() == '(')
                        parentheses.pop();
                    else
                        parentheses.push(x);
                    
                }
                else{
                    parentheses.push(x);
                }
            }
        }
        
        while(!parentheses.empty()){
            parentheses.pop();
            minAdd++;
        }
        return minAdd;
    }
};
