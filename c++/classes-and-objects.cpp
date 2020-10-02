/* https://www.hackerrank.com/challenges/classes-objects/problem */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {
    int num;
    int *scores, total;

    public: Student(int n = 5) {
        num = n;
        total = 0;
        scores = new int[num];
    }

    void input() {
        for (int i = 0; i < num; i++) {
            cin >> *(scores + i);
            total += *(scores + i);
        }
    }

    int calculateTotalScore() {
        return total;
    }
};

int main() {
    int n;
    cin >> n;
    Student *s = new Student[n];
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout << count;
    
    return 0;
}

