/*
Objective
The fundamental data types in c are int, float and char. Today, we're discussing int and float data types.

Task
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
- Declare 4 variables: two of type int and two of type float.
- Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
- Use the + and - operator to perform the following operations:
  - Print the sum and difference of two int variable on a new line.
  - Print the sum and difference of two float variable rounded to one decimal place on a new line.

Input Format
- The first line contains two integers.
- The second line contains two floating point numbers.

Constraints
- 1 <= integer variables <= 10^4
- 1 <= float variables <= 10^4

Output Format
Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to 1 decimal place) separated by a space on the second line.
*/

#include <stdio.h>

int main() {
    int int1, int2;
    float float1, float2;

    scanf("%d%d", &int1, &int2);
    scanf("%f%f", &float1, &float2);

    printf("%d %d\n", int1 + int2, int1 - int2);
    printf("%.1f %.1f", float1 + float2, float1 - float2);
    
    return 0;
}
