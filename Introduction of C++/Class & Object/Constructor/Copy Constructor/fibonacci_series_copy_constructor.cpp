// Write a c++ program to generate Fibonacci series using copy constructor
// 0  1  1  2  3  5

#include <iostream>

using namespace std;

class fibonacci_series {
  int count;

public:
  fibonacci_series(int term) { count = term; }

  fibonacci_series(fibonacci_series &x) {
    count = x.count;
  } // ? Copy Constructor

  int increment(int N) {

    if (N == 0)
      return 0;
    else if (N == 1)
      return 1;
    else
      return (increment(N - 1) + increment(N - 2));
  }

  void display(void) {

    for (int i = 0; i <= count; i++) {
      cout << increment(i) << "  ";
    }
  }
};

int main() {

  int n;

  cout << "Enter the last term => ";
  cin >> n;

  fibonacci_series obj(n);

  obj.display();

  return 0;
}