#include <iostream>

using namespace std;

// ? Base Class

class Employee {

  int id;

  float salary;

public:
  Employee(int inpId) {

    id = inpId;

    salary = 26.00;
  }

  void display() {

    cout << "Id => " << id << "\t\t"
         << "Salary => " << salary << endl;
  }
};

// ? Derived Class



int main() {

  Employee david(1), john(2), smith(3);

  david.display(), john.display(), smith.display();

  return 0;
}