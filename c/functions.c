/*
Objective
In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

Objective
In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

Input Format
Input will contain four integers - a, b, c, d, one in each line.

Output Format
Print the greatest of the four integers.

Note: I/O will be automatically handled.
*/

#include <stdio.h>

int max_of_four(a, b, c, d) {
    if (a >=b && a >= c && a>= d) {
        return a;
    } else if (b >= a && b >= c && b >= d) {
        return b;
    } else if (c >= a && c >= b && c >= d) {
        return c;
    } else {
        return d;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", max_of_four(a, b, c, d));
    
    return 0;
}
