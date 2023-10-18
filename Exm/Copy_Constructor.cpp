#include <iostream>

using namespace std;

class name {

public:
  int id;

  name(int a) { id = a; }

  name(name &x) { id = x.id; }
};

int main() {

  name A(26);

  cout << A.id << endl;

  name B(A);

  cout << B.id << endl;

  name C = A;

  cout << C.id << endl;

  return 0;
}