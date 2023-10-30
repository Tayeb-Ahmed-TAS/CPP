// Write a c++ program to generate Fibonacci series using copy constructor

#include <iostream>

using namespace std;

class fibonacci_series {
  int n;

public:
  fibonacci_series(int a) { n = a; }
  fibonacci_series(fibonacci_series &x) { n = x.n; }
  int increment(int x) {
    if (x == 0) {
      return 0;
    } else if (x == 1) {
      return 1;
    } else {
      return (increment(x - 1) + increment(x - 2));
    }
  }
  void show(void) {

    for (int i = 0; i <= n; i++) {
      cout << increment(i) << "  ";
    }
  }
};

int main() {

  int n;

  cout << "Enter the term => ";

  cin >> n;

  fibonacci_series obj(n);

  obj.show();

  return 0;
}