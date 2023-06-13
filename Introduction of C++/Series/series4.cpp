// ! 12+14+16+.......+200 ;

#include <conio.h>
#include <iostream>

using namespace std;

int main() {

  int n = 200, sum = 0;

  for (int i = 12; i <= n; i += 2) {

    sum += i;
  }

  cout << "The sum of the series is => " << sum;

  getch();
}