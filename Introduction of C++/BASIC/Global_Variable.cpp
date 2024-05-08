#include <iostream>

using namespace std;

int c = 45; // Global Variable

int main() {

  int a = 5, b = 10, c;

  c = a + b;

  cout << "The sum is " << c << endl; // Output is 15

  cout << "The global c is " << ::c
       << endl; // :: is the scope resolution operator and output is 45

  c = ::c + a + b;

  cout << "The sum is " << c << endl; // Output is 60

  return 0;
}