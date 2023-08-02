#include <conio.h>
#include <iostream>

using namespace std;

class students {

public:
  string name, dept;

  long long int id;

  students(string a, string b, long long int c) {

    name = a;

    dept = b;

    id = c;
  }

  void display() {

    cout << "Name: " << name << "\t\t"
         << "Department: " << dept << "\t\t"
         << "ID: " << id << endl;
  }
};

int main() {

  students s1("Rakib", "CSE", 2016331052), s2("Maria", "BBA", 2019331002);

  s1.display(), s2.display();

  getch();

  return 0;
}