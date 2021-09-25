/*
Objective
In this challenge, we practice using JavaScript Template Literals. Check the attached tutorial for more details.

Task
The code in the editor has a tagged template literal that passes the area and perimeter of a rectangle to a tag function named sides. Recall that the first argument of a tag function is an array of string literals from the template, and the subsequent values are the template's respective expression values.

Complete the function in the editor so that it does the following:
- Finds the initial values of s1 and s2 by plugging the area and perimeter values into the formula:
  s = (P +- sqrt(P^2 - 16 * A)) / 4
  where A is the rectangle's area and P is its perimeter.
- Creates an array consisting of s1 and s2 and sort it in ascending order.
- Returns the sorted array.

Input Format
- The first line contains an integer denoting s1.
- The second line contains an integer denoting s2.

Constraints
1 <= s1, s2 <= 100

Output Format
Return an array consisting of s1 and s2, sorted in ascending order.
*/

function sides(literals, ...expressions) {
    let P = expressions[1], A = expressions[0];
    let s1 = (P + Math.sqrt(P * P - 16 * A)) / 4;
    let s2 = (P - Math.sqrt(P * P - 16 * A)) / 4;
    let arr = [s1, s2];
    return arr.sort();
}
