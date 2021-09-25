/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example
arr = [1, 3, 5, 7, 9]
The minimum sum is 1 + 3 + 5 + 7 + 9 = 16 and the maximum sum is 3 + 5 + 7 + 9 = 24. The function prints
16 24

Function Description
Complete the miniMaxSum function in the editor below.

miniMaxSum has the following parameter(s):
- arr: an array of  integers

Print
Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.

Input Format
A single line of five space-separated integers.

Constraints
1 <= arr[i] <= 10^9

Output Format
Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)
*/

function miniMaxSum(arr) {
    arr.map(Number);
    arr = arr.sort();
    let min = arr[0] + arr[1] + arr[2] + arr[3];
    let max = min + arr[4] - arr[0];
    console.log(min + " " + max);
}
