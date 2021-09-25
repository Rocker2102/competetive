/*
In this problem, you need to print the pattern of the following form containing the numbers from 1 to n.
4 4 4 4 4 4 4  
4 3 3 3 3 3 4   
4 3 2 2 2 3 4   
4 3 2 1 2 3 4   
4 3 2 2 2 3 4   
4 3 3 3 3 3 4   
4 4 4 4 4 4 4   

Input Format
The input will contain a single integer n.

Constraints
1 <= n <= 100

Output Format
Print the pattern mentioned in the problem statement.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int t = 2 * n - 1;
    
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            int num = n;
            for (int k = 0; k < n; k++) {
                if (i == k || j == k || i == t - k - 1 || j == t - k - 1) {
                    num = n - k;
                    break;
                }
            }
            printf("%d", num);
            if (j != t - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
