function timeConversion(s) {
    const isNoon = s.substring(s.length - 2).toLowerCase() == 'pm' ? true : false;
    const time = s.substring(0, s.length - 2);
    const hour = Number(time.substring(0, 2));

    if (isNoon && hour !== 12) {
        return (hour + 12).toString() + time.slice(2);
    } else if (!isNoon && hour === 12) {
        return '00' + time.slice(2);
    }

    return time;
}
