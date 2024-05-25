#include <iostream>

using namespace std;

class Simple {
  int data1, data2;

public:
  Simple(int a, int b = 9) {
    data1 = a;
    data2 = b;
  }

  void showData(void) {
    cout << "Data is " << data1 << " and " << data2 << endl;
  }
};

int main() {

  Simple s1(1, 4), s2(1);
  s1.showData(); // Data is 1 and 4
  s2.showData(); // Data is 1 and 9

  return 0;
}