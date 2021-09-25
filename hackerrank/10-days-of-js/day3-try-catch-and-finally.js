/*
Objective
In this challenge, we learn about strings and exceptions. Check out the attached tutorials for more details.

Task
Complete the reverseString function; it has one parameter, s. You must perform the following actions:
- Try to reverse string s using the split, reverse, and join methods.
- If an exception is thrown, catch it and print the contents of the exception's message on a new line.
- Print s on a new line. If no exception was thrown, then this should be the reversed string; if an exception was thrown, this should be the original string.

Input Format
Locked stub code in the editor reads variable s from stdin and passes it to the function.

Output Format
You must write two print statements using console.log():
- Print the contents of a caught exception's message on a new line. If no exception was thrown, this line should not be printed.
- Print s on a new line. If no exception was thrown, then this should be the reversed string; if an exception was thrown, this should be the original string.
*/

function reverseString(s) {
    try {
        let arr = s.split("");
        arr.reverse();
        s = arr.join("");
    } catch (e) {
        console.log(e.message);
    } finally {
        console.log(s);
    }
}
