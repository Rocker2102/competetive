/* https://leetcode.com/problems/binary-search/ */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int end = nums.size() - 1;
        int beg = 0;
        int mid;

        if (end == 0) {
            if (nums[0] == target) return 0;
            else return -1;
        }

        while (beg <= end) {
            mid = beg + (end - beg) / 2;
            if (nums[mid] == target) { return mid; }
            else if (nums[mid] < target) {
                beg = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return -1;
    }
};
