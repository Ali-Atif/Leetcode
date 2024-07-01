class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        int left_sum = 0;

        // Calculate the total sum of the array
        for (int num : nums) {
            total_sum += num;
        }

        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            // Check if the left sum is equal to the right sum
            if (left_sum == total_sum - left_sum - nums[i]) {
                return i;
            }
            // Update the left sum
            left_sum += nums[i];
        }

        // If no pivot index is found, return -1
        return -1;
    }
};
