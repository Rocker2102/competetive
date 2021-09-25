/*
Objective
In this challenge, we practice using JavaScript classes. Check the attached tutorial for more details.

Task
Create a Polygon class that has the following properties:
- A constructor that takes an array of integer values describing the lengths of the polygon's sides.
- A perimeter() method that returns the polygon's perimeter.
Locked code in the editor tests the Polygon constructor and the perimeter method.

Note: The perimeter method must be lowercase and spelled correctly.

Input Format
There is no input for this challenge.

Output Format
The perimeter method must return the polygon's perimeter using the side length array passed to the constructor.
*/

class Polygon {
    constructor(sides) {
        this.sides = sides;
    }

    perimeter() {
        return this.sides.reduce(function(sum, i) {
            sum += i;
            return sum;
        });
    }
}
