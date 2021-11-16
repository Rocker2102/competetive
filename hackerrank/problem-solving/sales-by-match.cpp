int sockMerchant(int n, vector<int> ar) {
    map<int, int> m;
    int count = 0;

    for (int i = 0; i < n; i++) {
        m[ar[i]] += 1;
    }

    for (auto i = m.begin(); i != m.end(); i++) {
        count += i->second / 2;
    }

    return count;
}
