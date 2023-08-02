#include <iostream>

using namespace std;

// ? Base Class

class Employee {

public:
  int id;

  float salary;

  Employee(int inpId) {

    id = inpId;

    salary = 26.00;
  }

  Employee() {} // ? Default Constructor

  void display() {

    cout << "Id => " << id << "\t\t"
         << "Salary => " << salary << endl;
  }
};

// ? Derived Class

class Programmer : public Employee {

public:
  string language_name = "Python";

  Programmer(int inpId) { id = inpId; }
};

int main() {

  Employee david(1), john(2), smith(3);

  david.display(), john.display(), smith.display();

  Programmer skillF(4);

  skillF.display();

  cout << skillF.language_name << endl;

  return 0;
}