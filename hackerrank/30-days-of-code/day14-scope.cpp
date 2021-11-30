#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;

	Difference(vector<int> arr) {
        this->elements = arr;
    }

    int computeDifference() {
        if (this->elements.size() == 1) {
            this->maximumDifference = this->elements[0];
            return this->maximumDifference;
        }

        int min, max;
        min = max = this->elements[0];

        for (int i = 0; i < this->elements.size(); i++) {
            if (this->elements[i] < min) min = this->elements[i];
            if (this->elements[i] > max) max = this->elements[i];
        }
        this->maximumDifference = max - min;

        return this->maximumDifference;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
