/* https://leetcode.com/problems/orderly-queue/ */

/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var orderlyQueue = function(s, k) {
    s = s.split('');

    if (k === 1) {
        const len = s.length;
        let str = s.join();

        for (let i = 0; i < len; i++) {
            s.push(s.shift());
            const tmp = s.join('');

            if (tmp < str) { str = tmp; }
        }

        return str;
    }

    return s.sort().join('');
};
