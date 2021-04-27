class Solution {
public:
    
    int getSum(vector<int> code, int k, int i){
        int count = 0, sum = 0;
        
        if(k>0){
            if(i == (code.size() - 1))
                i = 0;
            else
                i = i + 1;
            
            while(count<abs(k)){
                if(i == code.size()){
                    i = 0;
                }
                sum += code[i];
                i += 1;
                count += 1;
            }
        }
        else{
            if(i == 0)
                i = code.size()-1;
            else
                i = i - 1;
            while(count<abs(k)){
                if(i == -1){
                    i = code.size()-1;
                }
                sum += code[i];
                i -= 1;
                count += 1;
            }
        }
        return sum;
    }
    
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> decryptedCode(code.size(), 0);
        if(k == 0)
            return decryptedCode;
        else{
            for(int i=0; i<code.size(); i++){
                decryptedCode[i] +=  getSum(code, k, i);
            }  
            return decryptedCode;
        }
    }
};
