// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2; // To avoid potential overflow
            if (isBadVersion(mid)) {
                right = mid; // First bad version is in the left half or at mid
            } else {
                left = mid + 1; // First bad version is in the right half
            }
        }
        return left; // or right, since left == right
    }
};
    