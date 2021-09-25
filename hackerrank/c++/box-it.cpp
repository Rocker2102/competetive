/*
Objective:
Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length l, breadth b, and height h.
The default constructor of the class should initialize l, b, and h to 0.
The parameterized constructor Box(int length, int breadth, int height) should initialize Box's l, b and h to length, breadth and height.
The copy constructor BoxBox (Box B) should set l, b and h to B's l, b and h respectively.

Apart from the above, the class should have 4 functions:
- int getLength() - Return box's length
- int getBreadth() - Return box's breadth
- int getHeight() - Return box's height
- long long CalculateVolume() - Return the volume of the box
- Overload the operator < for the class Box. Box A < Box B if:
  - A.l < B.l
  - A.b < B.b and A.l == B.l
  - A.h < B.h and A.b == B.b and A.l == B.l
- Overload operator << for the class Box().
  If B is an object of class Box:
  cout << B should print B.l, B.b and B.h on a single line separated by spaces.

Constraints:
- 0 <= l, b, h <= 10^5
- Two boxes being compared using the < operator will not have all three dimensions equal.
*/

#include<bits/stdc++.h>

using namespace std;

class Box {
    private:
        int l, b, h;
    
    public:
        Box() {
            l = b = h = 0;
        }

        Box(int l, int b, int h) {
            this->l = l;
            this->b = b;
            this->h = h;
        }

        Box(Box const &B) {
            l = B.l;
            b = B.b;
            h = B.h;
        }

        int getLength() {
            return l;
        }

        int getBreadth() {
            return b;
        }

        int getHeight() {
            return h;
        }

        long long CalculateVolume() {
            long l = this->l;
            long b = this->b;
            long h = this->h;
            return l * b * h;
        }

        bool operator < (Box const &B) {
            if (l < B.l) {
                return true;
            } else if (b < B.b && l == B.l) {
                return true;
            } else if (h < B.h && b == B.b && l == B.l) {
                return true;
            } else {
                return false;
            }
        }
    
    friend ostream& operator << (ostream& out, Box const &B);
};

std::ostream& operator << (ostream& out, Box const &B) {
    out << B.l << " " << B.b << " " << B.h;
    return out;
}
