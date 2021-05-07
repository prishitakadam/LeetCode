class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n, "");
        int i = 1;
        
        while(i<=n){
            if(i%3 == 0 && i%5 == 0)
                ans[i-1] += "FizzBuzz";
            else if(i%3 == 0)
                ans[i-1] += "Fizz";
            else if(i%5 == 0)
                ans[i-1] += "Buzz";
            else
                ans[i-1] += to_string(i);
            i++;
        }
        return ans;
    }
};
