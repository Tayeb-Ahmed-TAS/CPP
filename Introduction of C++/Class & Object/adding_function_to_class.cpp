#include <conio.h>
#include <iostream>

using namespace std;

class students {

public:
  int sem;

  string name, dep, uni;

  long long int id;

  void display() {

    cout << "Name => " << name << "\t\t"
         << "ID => " << id << "\t\t"
         << "Department => " << dep << "\t\t"
         << "University => " << uni << "\t\t"
         << "Semester => " << sem << endl;
  }
};

int main() {

  students s1, s2;

  s1.name = "Taskin Tabassum Shorna";

  s1.id = 21824222026;

  s1.dep = "CSE";

  s1.uni = "HABHIT";

  s1.sem = 3;

  s1.display();

  s2.name = "Tayeb Ahmed";

  s2.id = 21824222009;

  s2.dep = "CSE";

  s2.uni = "HABHIT";

  s2.sem = 3;

  s2.display();

  getch();

  return 0;
}