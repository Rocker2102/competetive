/* https://leetcode.com/problems/single-element-in-a-sorted-array/ */

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i = i + 2) {
            if (i == nums.size() - 1) {
                return nums[i];
            }
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
            if (nums.size() - 2 - i >= 0
                && nums[nums.size() - 1 - i] != nums[nums.size() - 2 - i]
            ) {
                return nums[nums.size() - 1 - i];
            }
        }
        return 0;
    }
};
