class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0; // Pointer to place non-zero elements

        // Step 1: Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[nonZeroIndex] = nums[i];
                nonZeroIndex++;
            }
        }

        // Step 2: Fill the remaining positions with zeros
        for (int i = nonZeroIndex; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
