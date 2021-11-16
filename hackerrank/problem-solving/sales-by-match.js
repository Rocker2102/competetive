function sockMerchant(n, ar) {
    const map = {};

    ar.forEach(val => {
        const key = val.toString();
        map[key] ? map[key] += 1 : map[key] = 1;
    });

    let count = 0;
    Object.values(map).forEach(val => {
        count += Math.floor(val / 2);
    });

    return count;
}
