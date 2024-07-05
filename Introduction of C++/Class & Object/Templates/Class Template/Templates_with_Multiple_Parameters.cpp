#include <iostream>

using namespace std;

int n = 0;
template <class T1, class T2>

class DemoClass {
  T1 data1;
  T2 data2;

public:
  DemoClass(T1 data1, T2 data2) {
    this->data1 = data1;
    this->data2 = data2;
  }

  void display(void) {

    ++n;

    cout << "Object " << n << " : " << endl
         << "Data1: " << data1 << endl
         << "Data2: " << data2 << endl
         << endl;
  }
};

int main() {

  DemoClass<int, float> obj1(14, 25.59);
  obj1.display();

  DemoClass<string, int> obj2("Hello", 26);
  obj2.display();

  DemoClass<int, char> obj3(14, 'A');
  obj3.display();

  return 0;
}

// Output :

/*

Object 1 :
Data1: 14
Data2: 25.59

Object 2 :
Data1: Hello
Data2: 26

Object 3 :
Data1: 14
Data2: A

*/