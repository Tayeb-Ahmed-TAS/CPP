// ! You are painting a rectangular wall and need to calculate the area in order
// to buy the necessary amount of paint. ! The variables length and height
// define the size of the wall. ! Calculate and output the area of the wall.

#include <conio.h>
#include <iostream>

using namespace std;

int main() {

  double length = 5.6, height = 3.1, area;

  area = length * height;

  cout << "Area of the wall is " << area << endl;

  getch();
}