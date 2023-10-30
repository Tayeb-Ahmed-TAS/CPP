#include <conio.h>
#include <iostream>

using namespace std;

class my_class {

public:
  int id;

  my_class(int a) { id = a; } // ? parameterized constructor

  my_class(my_class &x) { // ? copy constructor

    id = x.id;
  }

  void display() { cout << "ID => " << id << endl; }
};

int main() {

  my_class obj1(26);

  my_class obj2(obj1); // ? copy constructor called

  my_class obj3 = obj1; // ? copy constructor called

  obj1.display(), obj2.display(), obj3.display();

  getch();

  return 0;
}