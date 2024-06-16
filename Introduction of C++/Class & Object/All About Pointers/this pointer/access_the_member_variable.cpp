#include <iostream>

using namespace std;

class Students {
  int id;

public:
  void setData(int id) { this->id = id; }

  int getData(void) { return this->id; }
};

int main() {

  Students s1;

  s1.setData(101);

  cout << "Id: " << s1.getData() << endl;

  return 0;
}