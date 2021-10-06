/* https://leetcode.com/problems/contains-duplicate/ */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] += 1;
            if (m[nums[i]] > 1) { return true; }
        }

        return false;
    }
};
