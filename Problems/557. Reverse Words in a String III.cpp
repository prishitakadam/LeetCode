class Solution {
public:
    string reverseWords(string s) {
        int i=0, j=1, temp=0;
        
        while(temp<s.size()){
            while(s[j] != ' ' && j<s.size())
                j++;
            temp = j + 1;
            j--;
            while(i<j){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            i = temp;
            j = i + 1;
        }
        return s;
    }
};
