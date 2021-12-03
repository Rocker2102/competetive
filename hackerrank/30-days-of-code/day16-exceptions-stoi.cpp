#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    try {
        int tmp = stoi(S);
        cout << tmp << endl;
    } catch (const std::invalid_argument &err) {
        cout << "Bad String" << endl;
    }

    return 0;
}
