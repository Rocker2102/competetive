/*
Task
You have to complete the function void update(int *a, int *b), which reads two integers as argument, and sets a with the sum of them, and b with the absolute difference of them.

Input Format
The input will contain two integers, a and b, separated by a newline.

Output Format
You have to print the updated value of a and b, on two different lines.

Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.
*/

#include <stdio.h>

void update(int *a,int *b) {
    int tmp = *a;
    *a = *a + *b;
    *b = tmp - *b;
    if (*b < 0) {
        *b *= -1;
    }
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
