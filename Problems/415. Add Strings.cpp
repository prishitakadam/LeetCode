class Solution {
public:
    string getAddition(string num1, string num2){
        string ans = "", temp="";
        int carry = 0, i=num1.size()-1, j=num2.size()-1;
        
        while(i>-1){
            if(j>-1)
                temp = to_string((num1[i] - '0' )+ (num2[j]-'0') + carry);
            else
                temp = to_string((num1[i] - '0' ) + carry);

            if(temp.size()==2){
                carry = temp[0] - '0';
                ans += temp[1];
            }
            else{
                ans += temp[0];
                carry = 0;
            }
            i--;
            j--;
        }
        if(carry != 0)
            ans += to_string(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    string addStrings(string num1, string num2) {
        if(num1.size() < 5 && num2.size() <5)
            return to_string(stoi(num1) + stoi(num2));
        else{
            if(num1.size()>num2.size())
                return getAddition(num1, num2);
            else
                return getAddition(num2, num1);
        }
    }
};
