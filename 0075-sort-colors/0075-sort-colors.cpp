class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, current = 0;
        while (current <= high) {
            if (nums[current] == 0) { // Correct condition
                swap(nums[low], nums[current]);
                low++;
                current++;
            } else if (nums[current] == 2) {
                swap(nums[high], nums[current]);
                high--;
                // `current` is not incremented here to recheck the swapped value
            } else {
                current++; // Move to the next element if it's a `1`
            }
        }
    }
};
