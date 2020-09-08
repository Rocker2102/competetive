/*
Task
In this challenge, you have to input a five digit number and print the sum of digits of the number.

Input Format
The input contains a single five digit number, n.

Constraints
10000 <= n <= 99999

Output Format
Print the sum of the digits of the five digit number.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int tmp = n, sum = 0;
    while (tmp > 0) {
        sum += tmp % 10;
        tmp = tmp / 10;
    }
    printf("%d", sum);

    return 0;
}
