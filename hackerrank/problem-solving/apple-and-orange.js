/* [https://www.hackerrank.com/challenges/apple-and-orange/problem] */

function countApplesAndOranges(s, t, a, b, apples, oranges) {
    let fallenApples = 0, fallenOranges = 0;

    for (let i = 0; i < apples.length; i++) {
        let dist = a + apples[i];
        fallenApples += (dist >= s && dist <= t) ? 1 : 0;
    }
    for (let i = 0; i < oranges.length; i++) {
        let dist = b + oranges[i];
        fallenOranges += (dist >= s && dist <= t) ? 1 : 0;
    }

    console.log(fallenApples);
    console.log(fallenOranges);
}
