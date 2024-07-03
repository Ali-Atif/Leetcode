class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        int n = nums.size();
        if (n < k) return 0; // if there are not enough elements

        // Compute the sum of the first window of size k
        double maxSum = 0;
        for (int i = 0; i < k; ++i) {
            maxSum += nums[i];
        }

        // This will keep track of the maximum sum of any window of size k
        double currentSum = maxSum;

        // Slide the window from the beginning to the end of the array
        for (int i = k; i < n; ++i) {
            currentSum += nums[i] - nums[i - k];
            maxSum = std::max(maxSum, currentSum);
        }

        // The maximum average is the maximum sum divided by k
        return maxSum / k;
    }
};