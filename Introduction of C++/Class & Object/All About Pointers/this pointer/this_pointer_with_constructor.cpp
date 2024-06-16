#include <iostream>

using namespace std;

class Students {
  int id, age;

public:
  Students() {}

  Students(int id, int age) {
    this->id = id;
    this->age = age;
  }

  void display(void) {
    cout << "Id: " << id << endl;
    cout << "Age: " << age << endl;
  }
};

int main() {

  Students s1(101, 22), s2;

  s1.display();

  s2 = Students(102, 21);

  s2.display();

  return 0;
}