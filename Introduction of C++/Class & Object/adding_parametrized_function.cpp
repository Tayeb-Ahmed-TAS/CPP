#include <conio.h>
#include <iostream>

using namespace std;

class students {

public:
  string name, dep;

  long long int id;

  void setValue(string x, string y, long long int z) {

    name = x;

    dep = y;

    id = z;
  }

  void display() {

    cout << "Name => " << name << "\t\t"
         << "ID => " << id << "\t\t"
         << "Department => " << dep << endl;
  }
};

int main() {

  students s1, s2;

  s1.setValue("Maria", "CSE", 218242220015);

  s1.display();

  s2.setValue("John", "CSE", 218242220019);

  s2.display();

  getch();

  return 0;
}
