/* https://leetcode.com/problems/sort-colors/ */

class Solution {
public:
    void swap(vector<int>& nums, int i, int j) {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }

    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = nums.size() - 1;
        int tmp;

        for (int i = 0; i < nums.size(); i++) {
            if (one > two) { break; }

            if (nums[i] == 0) {
                swap(nums, i, zero);
                zero++; one++;
                continue;
            }

            if (nums[i] == 1) {
                one++;
                continue;
            }

            if (nums[i] == 2) {
                swap(nums, i, two);
                two--; i--;
            }
        }
    }
};
