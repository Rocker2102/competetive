/* https://leetcode.com/problems/array-nesting/ */

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int len = nums.size(), longestLen = 0;

        for (int i = 0; i < len; i++) {
            if (nums[i] == -1) {
                continue;
            }

            int count = 0, start = nums[i];
            while (nums[start] != -1) {
                int tmp = start;
                start = nums[start];
                nums[tmp] = -1;
                count++;
            }

            longestLen = max(count, longestLen);
        }
        return longestLen;
    }
};
