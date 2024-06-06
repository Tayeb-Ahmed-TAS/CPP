#include <iostream>

using namespace std;

class Base {
  int data1;

public:
  int data2;

  Base() {}

  void setData(int a, int b);

  int getData();
};

void Base::setData(int a, int b) {
  data1 = a;
  data2 = b;
}

int Base::getData() { return data1; }

class Derived1 : private Base {
  int data3, data4;

public:
  void display(void);
  void process(void);
  void setBaseData(int a, int b);
};

void Derived1::display(void) {
  cout << "Data1: " << getData() << endl;
  cout << "Data2: " << data2 << endl;
  cout << "Division is : " << data3 << endl;
  cout << "Remainder is : " << data4 << endl;
}

void Derived1::process(void) {
  data3 = getData() / data2;
  data4 = getData() % data2;
}

void Derived1::setBaseData(int a, int b) { setData(a, b); }

int main() {

  int a, b;

  cout << "Enter two numbers: " << endl;

  cin >> a >> b;

  Derived1 d1;

  d1.setBaseData(a, b);

  d1.process();

  d1.display();

  return 0;
}