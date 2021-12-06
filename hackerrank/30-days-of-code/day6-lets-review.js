function processData(input) {
    input = input.split('\n');

    input[0] = Number(input[0]);
    while (input[0] > 0) {
        const even = [], odd = [];
        const tmp = input.length - input[0];

        for (let i = 0; i < input[tmp].length; i++) {
            if (i % 2 === 0) {
                even.push(input[tmp].charAt(i));
            } else {
                odd.push(input[tmp].charAt(i));
            }
        }
        console.log(even.join(''), odd.join(''));
        input[0]--;
    }
}
