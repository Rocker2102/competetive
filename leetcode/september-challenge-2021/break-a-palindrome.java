/* https://leetcode.com/problems/break-a-palindrome/ */

class Solution {
    public String breakPalindrome(String palindrome) {
        int len = palindrome.length();

        if (len <= 1) { return ""; }

        short changed = 0;
        for (int i = 0; i < len / 2; i++) {
            if (palindrome.charAt(i) != 'a') {
                palindrome = palindrome.substring(0, i) + 'a' + palindrome.substring(i + 1);
                changed = 1;
                break;
            }
        }

        if (changed == 0) {
            palindrome = palindrome.charAt(len - 1) == 'a'
                ? palindrome.substring(0, len - 1) + 'b'
                : palindrome.substring(0, len - 1) + 'a';
        }

        return palindrome;
    }
}
