/*
Objective
In this challenge, we practice using arrow functions. Check the attached tutorial for more details.

Task
Complete the function in the editor. It has one parameter: an array, nums. It must iterate through the array performing one of the following actions on each element:
- If the element is even, multiply the element by 2.
- If the element is odd, multiply the element by 3.
- The function must then return the modified array.

Input Format
- The first line contains an integer, n, denoting the size of nums.
- The second line contains n space-separated integers describing the respective elements of nums.

Constraints
- 1 <= n <= 10
- 1 <= nums[i] <= 100, where nums[i] is the i'th element of nums.

Output Format
Return the modified array where every even element is doubled and every odd element is tripled.
*/

function modifyArray(nums) {
    return nums.map((curr) => {
        if (curr % 2 == 0) {
            return curr * 2;
        } else {
            return curr * 3;
        }
    });
}
