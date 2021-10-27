void swap(int* a, int* b){ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
int partition (vector<int>& nums, int low, int high){ 
    int pivot = nums[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++){ 
        if (nums[j] < pivot) { 
            i++;
            swap(&nums[i], &nums[j]); 
        } 
    } 
    swap(&nums[i + 1], &nums[high]); 
    return (i + 1); 
} 

void quickSort(vector<int>& nums, int low, int high){ 
    if (low < high) { 
        int pi = partition(nums, low, high); 
        quickSort(nums, low, pi - 1); 
        quickSort(nums, pi + 1, high); 
    } 
}
class Solution {
public:
    void sortColors(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
    }
};
