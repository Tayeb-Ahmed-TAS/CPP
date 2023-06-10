// ! 1+2+3+.......+n ;

#include <conio.h>
#include <iostream>

using namespace std;

int main() {

  int n, sum = 0;

  cout << "Enter the last number => ";

  cin >> n;

  for (int i = 1; i <= n; i++) {

    sum = sum + i;
  }

  cout << "The sum of the series is => " << sum;

  getch();
}