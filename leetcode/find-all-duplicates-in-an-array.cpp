/* https://leetcode.com/problems/find-all-duplicates-in-an-array/ */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] += 1;
        }

        vector<int> dups;

        for (auto i = m.begin(); i != m.end(); i++) {
            if (i->second > 1) {
                dups.push_back(i->first);
            }
        }

        return dups;
    }
};
