#include <conio.h>
#include <iostream>

using namespace std;

class item {
  int number;
  float cost;

public:
  void getdata(int a, float b);
  void putdata(void) {

    cout << "Number: " << number << endl;
    cout << "Cost: " << cost << endl;
  }
};

void item::getdata(int a, float b) {

  number = a;
  cost = b;
}

int main() {

  item x;
  cout << "Object x" << endl;
  x.getdata(100, 299.95);
  x.putdata();

  item y;
  cout << "Object y" << endl;
  y.getdata(200, 175.50);
  y.putdata();

  getch();

  return 0;
}
