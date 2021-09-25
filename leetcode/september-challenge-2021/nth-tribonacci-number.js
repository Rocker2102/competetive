/* https://leetcode.com/problems/n-th-tribonacci-number/ */

/**
 * @param {number} n
 * @return {number}
 */
 var tribonacci = function(n) {
    const F = [0, 1, 1];

    if (n <= 2) { return F[n] }

    let T;

    for (let i = 3; i <= n; i++) {
        T = F[0] + F[1] + F[2];
        F[0] = F[1];
        F[1] = F[2];
        F[2] = T;
    }

    return T;
};
