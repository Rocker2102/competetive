/*
Objective
In this challenge, we practice creating objects. Check out the attached tutorial for more details.

Task
Complete the function in the editor. It has two parameters: a and b. It must return an object modeling a rectangle that has the following properties:
- length: This value is equal to a.
- width: This value is equal to b.
- perimeter: This value is equal to 2 * (a + b)
- area: This value is equal to a * b
Note: The names of the object's properties must be spelled correctly to pass this challenge.

Input Format
- The first line contains an integer denoting a.
- The second line contains an integer denoting b.

Constraints
1 <= a, b <= 100

Output Format
Return a object that has the properties specified above. Locked code in the editor prints the returned object's lenght, width, perimeter, and area to STDOUT.
*/

function Rectangle(a, b) {
    return {
        "length": a,
        "width": b,
        "perimeter": 2 * (a + b),
        "area": a * b
    }
}
