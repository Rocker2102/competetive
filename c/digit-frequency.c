/*
Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format
The first line contains a string, num which is the given number.

Constraints
1 <= len(num) <= 1000

All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    int digit_count[10] = {0}, i;

    for (i = 0; i < strlen(s); i++) {
        int char_digit = (int)*(s + i);
        if (char_digit >= 48 && char_digit <= 57) {
            digit_count[char_digit - 48]++;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", digit_count[i]);
    }
 
    return 0;
}
