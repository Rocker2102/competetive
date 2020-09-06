/*
Objective
In this challenge, we learn about iterating over objects. Check the attached tutorial for more details.

Task
Complete the function in the editor. It has one parameter: an array, a, of objects. Each object in the array has two integer properties denoted by x and y. The function must return a count of all such objects o in array a that satisfy o.x == o.y.

Input Format
- The first line contains an integer denoting n.
- Each of the n subsequent lines contains two space-separated integers describing the values of x and y.

Constraints
- 5 <= n <= 10
- 1 <= x, y <= 100

Output Format
Return a count of the total number of objects o such that o.x == o.y. Locked stub code in the editor prints the returned value to STDOUT.
*/

function getCount(objects) {
    let count = 0;

    for (let i = 0; i < objects.length; i++) {
        if (objects[i].x == objects[i].y) {
            count++;
        }
    }

    return count;
}
