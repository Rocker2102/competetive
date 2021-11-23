/* https://leetcode.com/problems/move-zeroes/ */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        const int len = nums.size();
        int zeroIndex = 0, nonZeroIndex = 1;

        if (len == 1) return;
        
        if (len == 2) {
            if (nums[0] == 0 && nums[1] != 0)
                swap(nums[0], nums[1]);
            return;
        }

        while (nonZeroIndex < len) {
            if (nums[nonZeroIndex] == 0 && nums[zeroIndex] == 0) {
                nonZeroIndex++;
            } else if (nums[zeroIndex] == 0 && nums[nonZeroIndex] != 0) {
                swap(nums[nonZeroIndex], nums[zeroIndex]);
                nonZeroIndex++; zeroIndex++;
            } else {
                nonZeroIndex++; zeroIndex++;
            }
        }
    }
};
