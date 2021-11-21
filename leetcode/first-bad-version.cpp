/* https://leetcode.com/problems/first-bad-version/ */

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int end = n;
        int beg = 0;
        int mid;

        if (n == 1) {
            if (isBadVersion(1)) return 1;
            else return 0;
        }

        while (beg <= end) {
            mid = beg + (end - beg) / 2;
            if (isBadVersion(mid) == 1 && isBadVersion(mid - 1) == 0) return mid;
            if (isBadVersion(mid + 1) == 1 && isBadVersion(mid) == 0) return mid + 1;
            if (isBadVersion(mid - 1) == 1 && isBadVersion(mid - 2) == 0) return mid - 1;

            if (isBadVersion(mid) == 0) {
                beg = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return -1;
    }
};
