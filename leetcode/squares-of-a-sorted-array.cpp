/* https://leetcode.com/problems/squares-of-a-sorted-array/ */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size());
        int left = 0, right = nums.size() - 1;
        int curr = right + 1;

        while (curr--) {
            if (abs(nums[left]) < abs(nums[right])) {
                squares[curr] = nums[right] * nums[right];
                right--;
            } else {
                squares[curr] = nums[left] * nums[left];
                left++;
            }
        }

        return squares;
    }
};
