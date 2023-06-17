#include <conio.h>
#include <iostream>

using namespace std;

class students {

public:
  string name;

  int age;

  long long int id;
};

int main() {

  students s1, s2;

  s1.name = "Taskin Tabassum Shorna";

  s1.id = 21824222026;

  s1.age = 24;

  cout << "Name: " << s1.name << "\t"
       << "ID: " << s1.id << "\t\t"
       << "Age: " << s1.age << endl;

  s2.name = "Tayeb Ahmed";

  s2.id = 21824222009;

  s2.age = 22;

  cout << "Name: " << s2.name << "\t\t"
       << "ID: " << s2.id << "\t\t"
       << "Age: " << s2.age << endl;

  getch();

  return 0;
}