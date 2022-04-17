class SparseVector:
    def __init__(self, nums: List[int]):
        self.arr = nums
        

    # Return the dotProduct of two sparse vectors
    def dotProduct(self, vec: 'SparseVector') -> int:
        sumDP = 0
        for i in range(len(self.arr)):
            sumDP = sumDP + self.arr[i] * vec.arr[i]
        return sumDP
