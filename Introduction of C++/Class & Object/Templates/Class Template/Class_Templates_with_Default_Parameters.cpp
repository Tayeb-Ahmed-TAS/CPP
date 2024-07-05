#include <iostream>

using namespace std;

int n = 0;

template <class T1 = int, class T2 = float, class T3 = char>

class DemoClass {
  T1 data1;
  T2 data2;
  T3 data3;

public:
  DemoClass(T1 data1, T2 data2, T3 data3) {
    this->data1 = data1;
    this->data2 = data2;
    this->data3 = data3;
  }

  void display(void) {
    ++n;

    cout << "Object " << n << " : " << endl;
    cout << "Data1: " << data1 << "  "
         << "Data2: " << data2 << "  "
         << "Data3: " << data3 << endl
         << endl;
  }
};

int main() {

  DemoClass<> obj1(14, 2.69, 'A');
  obj1.display();

  DemoClass<string, int, char> obj2("Hello", 26, 'B');
  obj2.display();

  return 0;
}

// Output :

/*
Object 1 :
Data1: 14  Data2: 2.69  Data3: A

Object 2 :
Data1: Hello  Data2: 26  Data3: B
*/