#include <iostream>

using namespace std;

class Distance {
  int feet, inch;

public:
  Distance(int f, int i) : feet(f), inch(i) {}

  void add(Distance a, Distance b) {
    feet = a.feet + b.feet;
    inch = a.inch + b.inch;
    feet = feet + inch / 12;
    inch = inch % 12;
  }

  void display() { cout << feet << " feet\t" << inch << " inch" << endl; }
};

int main() {

  Distance d1(10, 7), d2(5, 7), d3(0, 0);

  d3.add(d1, d2);
  d3.display();

  return 0;
}