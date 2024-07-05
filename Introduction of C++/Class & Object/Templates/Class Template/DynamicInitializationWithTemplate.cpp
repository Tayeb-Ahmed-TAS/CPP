#include <iostream>

using namespace std;

template <class t1, class t2>

class ClassName {
  t1 data1;
  t2 data2;

public:
  ClassName() {}

  ClassName(t1 data1, t2 data2) {
    this->data1 = data1;
    this->data2 = data2;
  }

  void display() {
    cout << "Data1: " << data1 << endl;
    cout << "Data2: " << data2 << endl;
  }
};

int main() {

  ClassName<int, float> obj1;
  obj1 = ClassName<int, float>(14, 25.59);
  obj1.display();

  return 0;
}