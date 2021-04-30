class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int i = 0, j = num.size()-1;
        bool palindrome = true;
        
        while(i<j){
            if(num[i] == num[j]){
                i++;
                j--;
            }
            else{
                palindrome = false;
                break;
            }
        }
        return palindrome;
    }
};
