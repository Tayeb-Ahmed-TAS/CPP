#include <iostream>

using namespace std;

class Students {
  int id, age;

public:
  void setData(int id, int age) {
    this->id = id;
    this->age = age;
  }

  void display(void) {
    cout << "Id: " << id << endl;
    cout << "Age: " << age << endl;
  }
};

int main() {

  Students s1;

  s1.setData(101, 22);

  s1.display();

  return 0;
}