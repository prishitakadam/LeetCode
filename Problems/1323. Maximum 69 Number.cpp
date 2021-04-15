class Solution {
public:
    int maximum69Number (int num) {
        int i = 0;
        string n;
        
        n = to_string(num);
        
        while(i<n.size()){
            if(n[i] == '6'){
                n[i] = '9';
                break;
            }
            else
                i += 1;
        }
        return stoi(n);
    }
};
