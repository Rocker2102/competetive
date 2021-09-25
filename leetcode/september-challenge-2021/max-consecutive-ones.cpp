/* https://leetcode.com/problems/max-consecutive-ones/ */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = nums.size();
        int count = 0, maxLen = 0;

        for (int i = 0; i < len; i++) {
            if (nums[i] == 1) {
                if (i != 0 && nums[i - 1] == 1) {
                    count++;
                } else {
                    count = 1;
                }
                maxLen = std::max(count, maxLen);
            }
        }

        return maxLen;
    }
};
