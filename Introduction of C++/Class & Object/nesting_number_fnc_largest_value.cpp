#include <conio.h>
#include <iostream>

using namespace std;

class set {

public:
  int n1, n2;

  void getdata();

  void showdata();

  int compare();

  void isEqual();
};

void set::getdata() {

  cout << "Enter the first integer => ";

  cin >> n1;

  cout << "Enter the second integer => ";

  cin >> n2;
}

int set::compare() {

  if (n1 > n2) {

    return n1;

  } else if (n1 == n2) {

    isEqual();

    return 0;

  } else {

    return n2;
  }
}

void set::isEqual() { cout << "The numbers are equal"; }

void set::showdata() { cout << "The largest number is => " << compare(); }

int main() {

  set s1;

  s1.getdata();

  s1.showdata();

  getch();

  return 0;
}