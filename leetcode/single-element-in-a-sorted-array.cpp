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
        }
        return 0;
    }
};
