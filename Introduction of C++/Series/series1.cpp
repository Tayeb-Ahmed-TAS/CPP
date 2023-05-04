// ! 1 + (1 / 2) ^ 2 + (1 / 3) ^ 3 + ... + (1 / n) ^ n

#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {

  float i, n, k, sum = 0;

  cout << "Enter the last number => ";

  cin >> n;

  for (i = 1; i <= n; i++) {

    k = pow((1 / i), i);

    sum = sum + k;
  }

  cout << "The sum of the series is => " << sum;

  getch();
}