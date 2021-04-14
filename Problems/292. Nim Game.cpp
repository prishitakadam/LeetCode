//Output False for : {4, 8, 16, 24,...}

class Solution {
public:
    bool canWinNim(int n) {
        
        if(n == 1 || n == 2 || n == 3)
            return true;
        else if(n%2 != 0)
            return true;
        else{
            if((n/2)%2 == 0)
                return false;
            else
                return true;
        }
        
    }
};

//Alternate

class Solution {
public:
    bool canWinNim(int n) {
        
        if(n == 1 || n == 2 || n == 3)
            return true;
        else if(n%4 == 0)
            return false;
        else
            return true;
    }
};
