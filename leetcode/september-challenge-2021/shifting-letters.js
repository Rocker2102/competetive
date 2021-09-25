/* https://leetcode.com/problems/shifting-letters/ */

/**
 * @param {string} s
 * @param {number[]} shifts
 * @return {string}
 */
 var shiftingLetters = function(s, shifts) {
    const len = s.length;
    let sum = 0;
    let str = s.split('');

    for (let i = len - 1; i >= 0; i--) {
        sum += shifts[i];
        sum %= 26;
        str[i] = String.fromCharCode((s[i].charCodeAt(0) + sum - 97) % 26 + 97);
    }

    return str.join('');
};
