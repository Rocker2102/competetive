#include<iostream>

using namespace std;

int main() {
   string inputString; // declare a variable to hold our input
   getline(cin, inputString); // get a line of input from cin and save it to our variable

   cout << "Hello, World." << endl;
   cout << inputString << endl;

   return 0;
}
