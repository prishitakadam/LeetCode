class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        vector<int> leakedMeamory = {0, 0, 0};
        int bits = 1;
        
        while(true){
            leakedMeamory[0]++;
            if(bits<= memory1 && memory1 >= memory2){
                memory1 -= bits;
            }
            else if(bits<= memory2 && memory1 < memory2){
                memory2 -= bits;
            }
            else{
                leakedMeamory[1] = memory1;
                leakedMeamory[2] = memory2;
                break;
            }
            bits += 1;
        }
        return leakedMeamory;
    }
};
