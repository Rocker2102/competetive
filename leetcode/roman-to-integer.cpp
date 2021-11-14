/* https://leetcode.com/problems/roman-to-integer/ */

class Solution {
public:
    int calc(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i < s.size() - 1) {
                if (
                    ((s[i + 1] == 'V' || s[i + 1] == 'X') && s[i] == 'I') ||
                    ((s[i + 1] == 'L' || s[i + 1] == 'C') && s[i] == 'X') ||
                    ((s[i + 1] == 'D' || s[i + 1] == 'M') && s[i] == 'C')
                ) {
                    sum += (calc(s[i + 1]) - calc(s[i]));
                    i++;
                    continue;
                }
            }
            sum += calc(s[i]);
        }

        return sum;
    }
};
