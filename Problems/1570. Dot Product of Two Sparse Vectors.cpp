class SparseVector {
public:
    
    SparseVector(vector<int> &nums) {
        arr = nums;
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        for(size_t i=0; i<arr.size(); i++){
            sumDP = sumDP + arr[i] * vec.arr[i];
        }
        return sumDP;
    }
private:
    vector<int> arr;
    int sumDP = 0;
};

