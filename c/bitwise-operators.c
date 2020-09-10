/* https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem */

#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int and_max = 0, or_max = 0, xor_max = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int tmp = i & j;
            if (tmp < k && tmp > and_max) {
                and_max = tmp;
            }
            tmp = i | j;
            if (tmp < k && tmp > or_max) {
                or_max = tmp;
            }
            tmp = i ^ j;
            if (tmp < k && tmp > xor_max) {
                xor_max = tmp;
            }
        }
    }

    printf("%d\n%d\n%d", and_max, or_max, xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
