#include <iostream>

using namespace std;

template <class T1, class T2>

float average_func(T1 a, T2 b) {
  return (a + b) / 2.0;
}

int main() {

  cout << average_func(5, 6.36) << endl; // Output: 5.5

  cout << average_func(5.5, 6.596) << endl; // Output: 6

  cout << average_func(5, 2) << endl; // Output: 3.5

  return 0;
}