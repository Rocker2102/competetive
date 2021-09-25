/* https://leetcode.com/problems/n-th-tribonacci-number/ */

class Solution {
public:
    int tribonacci(int n) {
        int F[3] = {0, 1, 1};

        if (n <= 2) { return F[n]; }

        int T;

        for (int i = 3; i <= n; i++) {
            T = F[0] + F[1] + F[2];
            F[0] = F[1];
            F[1] = F[2];
            F[2] = T;
        }

        return T;
    }
};
