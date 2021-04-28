//Using Insert (Takes More time)
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressedRLElist;
        
        for(auto i=nums.begin(); i<nums.end(); i+=2)
            decompressedRLElist.insert(decompressedRLElist.end(), *i, *(i+1));
        
        return decompressedRLElist;
    }
};

//Using while Loop (Oms - 4ms Solution)
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressedRLElist;
        
        for(int i=0; i<nums.size(); i+=2){
            while(nums[i] > 0){
                decompressedRLElist.push_back(nums[i+1]);
                nums[i]--;
            }
        }
        
        return decompressedRLElist;
    }
};
