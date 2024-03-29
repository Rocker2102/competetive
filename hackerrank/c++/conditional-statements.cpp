/*
Task
Given a positive integer denoting n, do the following:
- If 1 <= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
- If n > 9, print Greater than 9.

Input Format
A single integer denoting s.

Constraints
1 <= n <= 10^9

Output Format
If 1 <= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9 instead.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n == 0) {
        cout<<"zero";
    } else if (n == 1) {
        cout<<"one";
    } else if (n == 2) {
        cout<<"two";
    } else if (n == 3) {
        cout<<"three";
    } else if (n == 4) {
        cout<<"four";
    } else if (n == 5) {
        cout<<"five";
    } else if (n == 6) {
        cout<<"six";
    } else if (n == 7) {
        cout<<"seven";
    } else if (n == 8) {
        cout<<"eight";
    } else if (n == 9) {
        cout<<"nine";
    } else {
        cout<<"Greater than 9";
    }

    return 0;
}
