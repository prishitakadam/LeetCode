class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVowelsSubstring = 0, vowels = 0;
        for(int i=0; i<k; i++){
            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowels++;
        }
        maxVowelsSubstring = vowels;
        
        for(int i=k, j=0; i<s.size(); i++, j++){
            if(s[j] == 'a' || s[j] == 'e'|| s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                vowels--;
            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowels++;
            if(vowels > maxVowelsSubstring)
                maxVowelsSubstring = vowels;
        }
        return maxVowelsSubstring;
    }
};
