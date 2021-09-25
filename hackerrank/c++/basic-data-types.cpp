/*
Note: You can also use cin and cout instead of scanf and printf; however, if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.

Input Format
Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format
Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
*/

#include <iostream>
using namespace std;

int main() {
    int i;
    long l;
    char ch;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", i, l, ch, f, d);

    return 0;
}
