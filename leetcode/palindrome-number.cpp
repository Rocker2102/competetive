/* https://leetcode.com/problems/palindrome-number/ */

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int rem, num = x;
        long long int sum = 0;

        while (x > 0) {
            rem = x % 10;
            sum = sum * 10 + rem;
            x /= 10;
        }

        if (num == sum) {
            return true;
        }

        return false;
    }
};
