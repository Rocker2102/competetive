function compareTriplets(a, b) {
    let scoreAlice = 0, scoreBob = 0;
    for (let i = 0; i < a.length; i++) {
        if (a[i] > b[i]) {
            scoreAlice++;
        } else if (a[i] < b[i]) {
            scoreBob++;
        }
    }
    return [scoreAlice, scoreBob];
}