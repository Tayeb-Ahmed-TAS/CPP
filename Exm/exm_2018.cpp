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

  void add(Distance d1, Distance d2) {
    feet = d1.feet + d2.feet;
    inch = d1.inch + d2.inch;
    feet = feet + (inch / 12);
    inch = inch % 12;
  }

  void sub(Distance d1, Distance d2) {
    feet = d1.feet - d2.feet;
    inch = d1.inch - d2.inch;
    feet = feet + (inch / 12);
    inch = inch % 12;
  }

  void getData() { cout << feet << " feet \t" << inch << " inch" << endl; }
};

int main() {

  Distance d1, d2, d3;
  d1.setData(4, 7);
  d2.setData(3, 6);
  d3.add(d1, d2);
  d3.getData();
  d3.sub(d1, d2);
  d3.getData();

  return 0;
}