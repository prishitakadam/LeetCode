class Solution {
public:
    string interpret(string command) {
        string interPretedString = "";
        for(int i=0; i<command.size(); i++){
            if(command[i] == '(' && command[i+1] == ')')
                interPretedString += "o";
            else if(command[i] != '(' && command[i] != ')')
                interPretedString += command[i];
        }
        return interPretedString;
    }
};
