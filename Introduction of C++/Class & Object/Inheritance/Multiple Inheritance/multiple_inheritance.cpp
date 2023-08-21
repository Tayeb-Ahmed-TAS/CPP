#include <iostream>

using namespace std;

class Base1 {

protected:
  int base1int;

public:
  void setData1(int a) { base1int = a; }
};

class Base2 {

protected:
  int base2int;

public:
  void setData2(int a) { base2int = a; }
};

class Base3 {

protected:
  int base3int;

public:
  void setData3(int a) { base3int = a; }
};

class Derived : public Base1, public Base2, public Base3 {

public:
  void showData() {

    cout << "The value of Base1 is " << base1int << endl;
    cout << "The value of Base2 is " << base2int << endl;
    cout << "The value of Base3 is " << base3int << endl;
    cout << "The sum of these value is " << base1int + base2int + base3int
         << endl;
  }
};

int main() {

  Derived obj;

  obj.setData1(75);
  obj.setData2(25);
  obj.setData3(60);
  obj.showData();

  return 0;
}