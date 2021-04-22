class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num == 4 || num == 1)
            return true;
        else{
            string binary = bitset<64>(num).to_string();
            int c = 0, i = binary.size()-1;
            
            if(count(binary.begin(), binary.end(), '1') == 1){
                while(i>0){
                    if(binary[i] == '1')
                        break;
                    c += 1;
                    i -= 1;
    
                }
                if(c%2 == 0 && c != 0)
                    return true;
                else
                    return false;
            }
            else
                return false;
        }
    }
};
