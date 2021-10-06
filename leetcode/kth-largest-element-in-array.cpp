/* https://leetcode.com/problems/kth-largest-element-in-an-array/ */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        for (auto i = m.rbegin(); i != m.rend(); i++) {
            k -= i->second;
            if (k <= 0) {
                return i->first;
            }
        }

        return -1;
    }
};
