// sinX = X - X^3 / 3! + X^5 / 5! - X^7 / 7! + ..........

#include <cmath>
#include <iostream>

#define pi 3.1416

using namespace std;

// ? Function to calculate factorial of a number

int fact(int n) {

  int fact = 1;

  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }

  return fact;
}

// ? Function to calculate sinX using Taylor series

double sin(double x, int n) {

  double sum = x; // ? First sum is x

  int sign = 1;

  for (int i = 3; i <= n; i = i + 2) {
    sign = sign * -1;

    sum = sum + sign * pow(x, i) / fact(i);
  }

  return sum;
}

int main() {

  double x, y = 30; // ? Replace with your desired angle in radians

  x = y * (pi / 180); // ? Convert radian to degree

  int n = 10; // ? Replace with the number of terms you want

  double res = sin(x, n);

  cout << "sin (" << y << ") = " << res << endl;

  return 0;
}