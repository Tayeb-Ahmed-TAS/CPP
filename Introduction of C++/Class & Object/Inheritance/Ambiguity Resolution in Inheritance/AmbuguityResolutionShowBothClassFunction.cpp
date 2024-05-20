#include <iostream>

using namespace std;

class base1 {
public:
  void display() { cout << "Display of base1" << endl; }
};

class base2 {
public:
  void display() { cout << "Display of base2" << endl; }
};

class derived : public base1, public base2 {
public:
  void display() {
    base1::display();
    base2::display();
  }
};

int main() {

  derived d;
  d.display();

  return 0;
}