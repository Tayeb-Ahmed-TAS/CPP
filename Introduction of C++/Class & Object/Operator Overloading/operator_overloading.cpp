#include <iostream>

using namespace std;

class count {

  int a;

public:
  count(int x) { a = x; }

  void operator++() { a++; }

  void show() { cout << a << endl; }
};

int main() {

  count obj(25);

  ++obj;

  obj.show();

  return 0;
}

// Another source code (using scope resolution operator) =>

// #include <iostream>

// using namespace std;

// class count {

//   int a;

// public:
//   count(int x) { a = x; }

//   void operator++();

//   void show() { cout << a << endl; }
// };

// void count::operator++() { a++; }

// int main() {

//   count obj(25);

//   ++obj;

//   obj.show();

//   return 0;
// }