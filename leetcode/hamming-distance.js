/* https://leetcode.com/problems/hamming-distance/ */

/**
 * @param {number} x
 * @param {number} y
 * @return {number}
 */
var hammingDistance = function(x, y) {
    y = y.toString(2);
    x = x.toString(2);
    let i = 1, count = 0;

    while (i <= y.length || i <= x.length) {
        const yChar = y.charAt(y.length - i);
        const xChar = x.charAt(x.length - i)
        if ((yChar == '' ? '0' : yChar) != (xChar == '' ? '0' : xChar)) {
            count++;
        }
        i++;
    }

    return count;
};
