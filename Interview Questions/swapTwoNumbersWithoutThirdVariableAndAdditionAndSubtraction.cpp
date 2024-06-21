// Swap Two numbers of two variables without using the third variable and
// Addition and Subtraction
// Logic =>
//     a = 3, b = 5
//     a = a ^ b = 3 ^ 5 = 6
//     b = a ^ b = 6 ^ 5 = 3
//     a = a ^ b = 6 ^ 3 = 5

#include <iostream>

using namespace std;

int main() {

  int a = 3, b = 5;

  cout << "The two numbers are " << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  a = a ^ b;

  b = a ^ b;

  a = a ^ b;

  cout << "After swapping the two numbers are " << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  return 0;
}