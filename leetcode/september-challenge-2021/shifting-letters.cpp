/* https://leetcode.com/problems/shifting-letters/ */

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int len = s.size();
        int sum = 0;

        for (int i = len - 1; i >= 0; i--) {
            sum += shifts[i];
            sum %= 26;
            s[i] = (char)(((int)s[i] + sum - 97) % 26 + 97);
        }

        return s;
    }
};
