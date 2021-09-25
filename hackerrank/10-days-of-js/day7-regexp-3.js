/*
Task
Complete the function in the editor below by returning a RegExp object, re, that matches every integer in some string s.

Constraints
- The length of string s is >= 3.
- It's guaranteed that string s contains at least one integer.

Output Format
The function must return a RegExp object that matches every integer in some string s.

Sample Input 0
102, 1948948 and 1.3 and 4.5

Sample Output 0
102
1948948
1
3
4
5
*/

function regexVar() {
    let re = /\d+/gm;

    return re;
}
