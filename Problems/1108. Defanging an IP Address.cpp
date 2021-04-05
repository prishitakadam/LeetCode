class Solution {
public:
    string defangIPaddr(string address) {
        string newaddress;
        
        for(auto const& x: address){
            if(x == '.'){
                newaddress.append("[.]");
            }
            else{
                newaddress += x;
            }
        }
    
        return newaddress;
    }
    
};
