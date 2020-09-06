/* [https://www.hackerrank.com/challenges/apple-and-orange/problem] */

function countApplesAndOranges(s, t, a, b, apples, oranges) {
    let fallenApples = 0, fallenOranges = 0;

    for (let i = 0; i < apples.length; i++) {
        let dist = a + apples[i];
        if (dist >= s && dist <= t) {
            fallenApples++;
        }
    }
    for (let i = 0; i < oranges.length; i++) {
        let dist = b + oranges[i];
        if (dist >= s && dist <= t) {
            fallenOranges++;
        }
    }

    console.log(fallenApples);
    console.log(fallenOranges);
}
