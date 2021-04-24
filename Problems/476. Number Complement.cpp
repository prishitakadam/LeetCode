class Solution {
public:
    int findComplement(int num) {
        string complementBinary = "";
        while(num>0){
            if(num%2 == 1)
                complementBinary += '0';
            else
                complementBinary += '1';
            num = num/2;
        }
        reverse(complementBinary.begin(), complementBinary.end());
        bitset<32>bits(complementBinary);
        return bits.to_ulong();
    }
};
