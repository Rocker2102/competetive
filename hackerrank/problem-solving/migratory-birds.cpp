int migratoryBirds(vector<int> arr) {
    map<int, int> m;

    for (int i = 0; i < arr.size(); i++) {
        m[arr[i]] += 1;
    }

    int max = 0;
    for (auto i = m.begin(); i != m.end(); i++) {
        if (i->second > max) {
            arr[0] = i->first;
            max = i->second;
        } else if (i->second == max) {
            arr[0] = i->first < arr[0] ? i->first : arr[0];
        }
    }

    return arr[0];
}
