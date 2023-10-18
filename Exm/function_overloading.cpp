#include <iostream>

using namespace std;

int area(int s) { return s * s * s; }

double area(int r, int h) { return 3.1416 * r * r * h; }

double area(int l, int b, int h) { return l * b * h; }

int main() {

  cout << area(5) << endl;
  cout << area(5, 6) << endl;
  cout << area(5, 6, 7) << endl;

  return 0;
}