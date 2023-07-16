#include <conio.h>
#include <iostream>

using namespace std;

class employee {

  char name[30];

  float age;

public:
  void getdata(void);

  void putdata(void);
};

void employee::getdata(void) {

  cout << "Enter name:";

  cin >> name;

  cout << "Enter age:";

  cin >> age;
}

void employee::putdata(void) {

  cout << "Name:" << name << "\n";

  cout << "Age:" << age << "\n";
}

int main() {

  int size = 3;

  employee manager[size];

  for (int i = 0; i < size; i++) {

    cout << "\nDetails of manager " << i + 1 << "\n";

    manager[i].getdata();
  }

  cout << "\n";

  for (int i = 0; i < size; i++) {

    cout << "\nManager " << i + 1 << "\n";

    manager[i].putdata();
  }

  getch();

  return 0;
}
