/* https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem */

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> arr;
    stringstream ss(str);
    int tmp;
    char ch;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',') {
            ss >> tmp >> ch;
            arr.push_back(tmp);
        }
    }
    /* for getting the last value */
    ss >> tmp >> ch;
    arr.push_back(tmp);

    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
