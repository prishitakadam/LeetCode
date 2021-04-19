class Solution {
public:
    int addDigits(int num) {
        string str = to_string(num);
        int ans;
        
        if(num < 10){
            return num;
        }
        else{
            while(str.size() != 1){
                ans = 0;
                for(auto const& x: str){
                    ans += x - '0';
                }
                
                str = to_string(ans);
            }
            
            return stoi(str);
        }
    
    }
};
