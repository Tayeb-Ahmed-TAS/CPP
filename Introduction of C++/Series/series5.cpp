// SUM = 1 + (1/2) ^ 2 + (1/3) ^ 3 + (1/4) ^ 4 + ... .... ...

#include <cmath>
#include <iostream>

using namespace std;

int main() {

  float sum = 0;

  for (int i = 1; i <= 4; i++) {

    sum = sum + (1 / pow(i, i));
  }

  cout << "The sum of this series is " << sum;

  return 0;
}