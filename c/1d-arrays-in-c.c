/* https://www.hackerrank.com/challenges/1d-arrays-in-c/problem */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}
