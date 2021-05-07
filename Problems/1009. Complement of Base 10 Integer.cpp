class Solution {
public:
    int bitwiseComplement(int N) {
        int complementAns = 0, x=1;
        string binN = "";
        
        if(N == 0)
            return 1;
        
        while(N>0){
            if(N%2 == 1)
                binN += '0';
            else
                binN += '1';
            N = N/2;
        }
    
        reverse(binN.begin(), binN.end());
        for(int i=binN.size()-1; i>0; i--){
            complementAns += ((binN[i]-'0') * x);
            x = x * 2;
        }
        return complementAns;
    }
};
