#include <vector>
#include <algorithm>

class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        // Step 1: Sort the array
        std::sort(nums.begin(), nums.end());
        
        int max_sum = 0;
        // Step 2: Sum up every second element starting from the first
        for (int i = 0; i < nums.size(); i += 2) {
            max_sum += nums[i];
        }
        
        return max_sum;
    }
};;