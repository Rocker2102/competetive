/*
Objective
In this challenge, we learn about Arrays. Check out the attached tutorial for more details.

Task
Complete the getSecondLargest function in the editor below. It has one parameter: an array, , of  numbers. The function must find and return the second largest number in .

Input Format
- Locked stub code in the editor reads the following input from stdin and passes it to the function:
- The first line contains an integer, , denoting the size of the  array.
- The second line contains  space-separated numbers describing the elements in .

Constraints
- 1 <= n <= 100
- 0 <= nums[i] <= 100, where nums[i] is the number at index i.
- The numbers in nums are not distinct.

Output Format
Return the value of the second largest number in the nums array.
*/

function getSecondLargest(nums) {
    let max = nums[0], secondMax = nums[0];

    for (let i = 0; i <= nums.length; i++) {
        if (i < nums.length && nums[i] > max) {
            max = nums[i];
        }
        if (i > 0 && nums[i - 1] > secondMax && nums[i - 1] < max) {
            secondMax = nums[i - 1];
        }
    }

    return secondMax;
}
