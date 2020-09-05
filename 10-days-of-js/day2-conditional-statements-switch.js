/*
Objective
In this challenge, we learn about switch statements. Check out the attached tutorial for more details.

Task
Complete the getLetter(s) function in the editor. It has one parameter: a string, s, consisting of lowercase English alphabetic letters (i.e., a through z). It must return A, B, C, or D depending on the following criteria:
- If the first character in string s is in the set {a, e, i, o, u}, then return A.
- If the first character in string s is in the set {b, c, d, f, g}, then return B.
- If the first character in string s is in the set {h, j, k, l, m}, then return C.
- If the first character in string s is in the set {n, p, q, r, s, t, v, w, x, y, z}, then return D.
Hint: You can get the letter at some index  in  using the syntax s[i] or s.charAt(i).

Input Format
Stub code in the editor reads a single string denoting  from stdin.

Constraints
- 1 <= |s| <= 100, where |s| is the length of s.
- String s contains lowercase English alphabetic letters (i.e., a through z) only.

Output Format
Return either A, B, C, or D according to the criteria given above.
*/

function getLetter(s) {
    let letter;

    switch (s.charAt(0)) {
        case "a": case "e": case "i": case "o": case "u": letter = "A"; break;
        case "b": case "c": case "d": case "f": case "g": letter = "B"; break;
        case "h": case "j": case "k": case "l": case "m": letter = "C"; break;
        default: letter = "D";
    }
    
    return letter;
}
