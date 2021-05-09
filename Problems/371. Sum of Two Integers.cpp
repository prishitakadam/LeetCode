class Solution {
public:
    int getBinaryAddition(int a1, int b1){
        string a = bitset<32> (a1).to_string();
        string b = bitset<32> (b1).to_string();
        long long int binAns = 0, exp = 0, i=a.size()-1, cin=0, ain =0, bin = 0, c_out=0;
        
        while(i>=0){
            ain = a[i] - '0';
            bin = b[i] - '0';
            
            binAns += ((ain ^ bin) ^ cin) * pow(2, exp);
            c_out = (((ain ^ bin) && cin) || (ain && bin));
            cin = c_out;
            
            i--;
            exp++;
        }
        
        if(cin == 1 && a1>0 && b1>0)
            binAns += pow(2, exp);
        return binAns;
    }
    
    int getSum(int a, int b) {
        return getBinaryAddition(a, b);
    }
};
