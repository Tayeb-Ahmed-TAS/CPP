/*
Define a class named "Distance" that has data members "feet" and "inch" and
necessary member functions. Write a complete c++ program to add and subtract
two object of that class.
*/

#include <iostream>

using namespace std;

class Distance {
  int feet, inch;

public:
  void setData(int x, int y) { feet = x, inch = y; }

  void add(Distance a, Distance b) {
    feet = a.feet + b.feet;
    inch = a.inch + b.inch;
    feet = feet + (inch / 12); // 12 inch = 1 feet
    inch = inch % 12;
  }

  void sub(Distance a, Distance b) {
    feet = a.feet - b.feet;
    inch = a.inch - b.inch;
    feet = feet + (inch / 12); // 12 inch = 1 feet
    inch = inch % 12;
  }

  void showData() { cout << feet << " feet\t" << inch << " inch" << endl; }
};

int main() {

  Distance d1, d2, d3;
  d1.setData(5, 11);
  d2.setData(5, 3);
  d3.add(d1, d2);
  d3.showData();
  d3.sub(d1, d2);
  d3.showData();

  return 0;
}