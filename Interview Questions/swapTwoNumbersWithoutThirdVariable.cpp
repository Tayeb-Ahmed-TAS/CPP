// Swap Two numbers of two variables without using the third variable
// Logic =>
//     a = 3, b = 5
//     a = a - b = 3 - 5 = -2
//     b = a + b = -2 + 5 = 3
//     a = b - a = 3 - (-2) = 5

#include <iostream>

using namespace std;

int main() {

  int a = 3, b = 5;

  cout << "The two numbers are " << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  a = a - b;

  b = a + b;

  a = b - a;

  cout << "After swapping the two numbers are " << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  return 0;
}