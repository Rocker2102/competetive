#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n, tmpInt;
    string tmpStr;
    map<string, int> dict;

    cin >> n;

    while (n) {
        cin >> tmpStr >> tmpInt;
        dict[tmpStr] = tmpInt;
        n--;
    }

    while (cin >> tmpStr) {
        if (dict.find(tmpStr) == dict.end()) {
            cout << "Not found" << endl;
        } else {
            cout << tmpStr << "=" << dict[tmpStr] << endl;
        }
    }

    return 0;
}
