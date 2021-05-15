class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        bool peakFound = false;
        
        if(arr.size()<3)
            return false;
        
        for(int i=0; i<arr.size()-1; i++){
            if(peakFound == false){
                if(arr[i+1] <= arr[i]){
                    if(arr[i] == arr[i+1])
                        return false;
                    else{
                        if(i == 0)
                            return false;
                        else
                            peakFound = true; 
                    }
                }
            }
            else{
                if(arr[i] == arr[i+1])
                        return false;
                
                if(arr[i] < arr[i+1])
                    return false;
            }
        }
        
        if(peakFound == false)
            return false;
        else
            return true;
    }
};
