class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();  // Get the size of the input vector
        int count = 0;        // Initialize count to zero to store the number of valid subarrays

        // Iterate through each element in the vector as the starting point of a subarray
        for (int i = 0; i < n; i++) {
            int sum = 0;  // Initialize sum to zero for each starting point

            // Iterate through the rest of the vector to form subarrays starting from index i
            for (int j = i; j < n; j++) {
                sum += nums[j];  // Add the current element to the sum

                // Check if the current sum equals the target value k
                if (sum == k) {
                    count++;  // If yes, increment the count of valid subarrays
                }
            }
        }

        return count;  // Return the total count of valid subarrays
    }
};
