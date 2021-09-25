/* https://leetcode.com/problems/array-nesting/ */

/**
 * @param {number[]} nums
 * @return {number}
 */
 var arrayNesting = function(nums) {
    const len = nums.length;
    let longestLen = 0;

    for (let i = 0; i < len; i++) {
        if (nums[i] === -1) {
            continue;
        }

        let count = 0, start = nums[i];
        while (nums[start] != -1) {
            const tmp = start;
            start = nums[start];
            nums[tmp] = -1;
            count++;
        }

        longestLen = Math.max(count, longestLen)
    }
    return longestLen;
};
