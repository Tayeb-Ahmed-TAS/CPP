#include <iostream>

using namespace std;

template <class T>

void swap_func(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {

  int a = 5, b = 6;

  cout << "Before swapping: " << endl
       << "a = " << a << "\t"
       << "b = " << b << endl;

  swap_func(a, b);

  cout << "After swapping: " << endl
       << "a = " << a << "\t"
       << "b = " << b << endl;

  return 0;
}