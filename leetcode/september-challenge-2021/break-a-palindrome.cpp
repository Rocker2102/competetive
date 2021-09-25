/* https://leetcode.com/problems/break-a-palindrome/ */

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int len = palindrome.size();

        if (len <= 1) { return ""; }

        unsigned char changed = '0';
        for (int i = 0; i < len / 2; i++) {
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                changed = '1';
                break;
            }
        }

        if (changed == '0') {
            palindrome[len - 1] = palindrome[len - 1] == 'a' ? 'b' : 'a';
        }

        return palindrome;
    }
};
