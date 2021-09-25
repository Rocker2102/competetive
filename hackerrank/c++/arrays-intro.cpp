/*
You'll be given an array of  integers and you have to print the integers in the reverse order.

Input Format
The first line of the input contains N, where N is the number of integers. The next line contains N integers separated by a space.

Constraints
- 1 <= N <= 1000
- 1 <= A[i] <= 10000, where A[i] is the i-th integer in the array.

Output Format
Print the N integers of the array in the reverse order in a single line separated by a space.
*/

#include <iostream>
using namespace std;

int main() {
    int i, n;
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int tmp = 0;
    for (i = 0; i < n / 2; i++){
        tmp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp;
    }

    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
