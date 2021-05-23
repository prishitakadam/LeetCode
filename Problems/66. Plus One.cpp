class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() == 1){
            if(digits[0] == 9)
                return {1, 0};
            else{
                digits[0]++;
                return digits;;
            }
        }
        else{
            int i = digits.size()-1, plus = 0;
            if(digits[i] == 9){
                digits[i] = 0;
                plus = 1;
                i--;
                while(i>=0){
                    if(digits[i] == 9){
                        digits[i] = 0;
                        plus = 1;
                        i--;
                    }
                    else{
                        digits[i]++;
                        if(digits[i] <= 9){
                            plus = 0;
                            break;
                            
                        }
                    }
                }
                if(digits[0] == 0 && plus == 1)
                    digits.insert(digits.begin(), 1);
                return digits;
            }
            else{
                digits[i]++;
                return digits;
            }
        }
    }
};
