// cosX = 1 - X^2 / 2! + X^4 / 4! - X^6 / 6! + ..........

#include <cmath>
#include <iostream>

using namespace std;

#define pi 3.1416

// ? Function to calculate factorial of a number

int fact(int n) {

  int fact = 1;

  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }

  return fact;
}

// ? Function to calculate cosX using Taylor series

double cos(double x, int n) {

  double sum = 1; // ? First sum is 1

  int sign = 1;

  for (int i = 2; i <= n; i = i + 2) {

    sign = sign * -1;

    sum = sum + sign * pow(x, i) / fact(i);
  }

  return sum;
}

int main() {

  double x, y = 30; // ? Replace with your desired angle in radians

  x = y * (pi / 180); // ? Convert radian to degree

  int n = 5; // ? Replace with the number of terms you want

  double res = cos(x, n);

  cout << "cos (" << y << ") = " << res << endl;

  return 0;
}