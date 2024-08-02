class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int total_ones = accumulate(nums.begin(), nums.end(), 0);
    if (total_ones == 0) {  // Edge case: no 1's in the array
        return 0;
    }
    
    int n = nums.size();
    nums.insert(nums.end(), nums.begin(), nums.end());  // Concatenate array to itself
    
    int current_zeros = 0;
    for (int i = 0; i < total_ones; ++i) {
        if (nums[i] == 0) {
            ++current_zeros;
        }
    }
    
    int min_zeros = current_zeros;
    
    for (int i = 1; i < n; ++i) {
        if (nums[i - 1] == 0) {
            --current_zeros;
        }
        if (nums[i + total_ones - 1] == 0) {
            ++current_zeros;
        }
        min_zeros = min(min_zeros, current_zeros);
    }
    
    return min_zeros;
    }
};