#include <conio.h>
#include <iostream>

using namespace std;

int volume(int a) {

  // ? For Cube

  return a * a * a;
}

long volume(long l, int b, int h) {

  // ? For Rectangular Box

  return l * b * h;
}

double volume(double r, int h) {

  // ? For Cylinder

  return 3.1416 * r * r * h;
}

int main() {

  cout << "Volume of Cube: " << volume(10) << endl;

  cout << "Volume of Rectangular Box: " << volume(10, 5, 2) << endl;

  cout << "Volume of Cylinder: " << volume(10.5, 5) << endl;

  getch();

  return 0;
}