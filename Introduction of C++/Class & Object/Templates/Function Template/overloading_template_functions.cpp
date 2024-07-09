#include <iostream>

using namespace std;

void func(int a) { cout << "I am first func() " << a << endl; }

template <class T>

void func(T a) {
  cout << "I am templatised func() " << a << endl;
}

template <class T>

void func1(T a) {
  cout << "I am templatised func1() " << a << endl;
}

int main() {

  func(4); // Output: I am first func() 4
  // Because Exact match takes the highest priority.

  func(4.5); // Output: I am templatised func() 4.5
  // Because Exact match is not available so it will go for the templatised

  func1(4); // Output: I am templatised func() 4

  return 0;
}