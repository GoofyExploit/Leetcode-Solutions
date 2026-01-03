// Last updated: 1/3/2026, 6:26:09 PM
class Solution {
    public void moveZeroes(int[] nums) {
        int j = 0;  // Pointer for the position of the next non-zero element

        // Move non-zero elements to the front
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];  // Place non-zero element at position j
                if (i != j) {
                    nums[i] = 0;  // Set the current position i to 0
                }
                j++;  // Increment the position for the next non-zero element
            }
        }
    }
}
