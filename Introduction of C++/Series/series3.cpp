// ! 5+7+9+.......+99 ;

#include <conio.h>
#include <iostream>

using namespace std;

int main() {

  int n = 99, sum = 0;

  for (int i = 5; i <= n; i += 2) {

    sum = sum + i;
  }

  cout << "The sum of the series is => " << sum;

  getch();
}