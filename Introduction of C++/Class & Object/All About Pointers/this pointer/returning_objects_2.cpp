#include <iostream>

using namespace std;

class Students {
  int id, age;

public:
  Students &setData(int id, int age);

  void display(void);
};

Students &Students::setData(int id, int age) {
  this->id = id;
  this->age = age;

  return *this;
}

void Students::display(void) {
  cout << "Id: " << id << endl;
  cout << "Age: " << age << endl;
}

int main() {

  Students s1;

  s1.setData(101, 22).display();

  return 0;
}