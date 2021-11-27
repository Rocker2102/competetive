#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int x = n, last = 0, curr;
    int maxLen = 0, currLen = 0;

    while (x > 0) {
        curr = x % 2;
        if (x == n) {
            last = curr;
        }
        if (curr == 1) {
            if (last == 1) currLen++;
            else currLen = 1;
            maxLen = max(currLen, maxLen);
        }
        last = curr;
        x /= 2;
    }

    cout << maxLen << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
