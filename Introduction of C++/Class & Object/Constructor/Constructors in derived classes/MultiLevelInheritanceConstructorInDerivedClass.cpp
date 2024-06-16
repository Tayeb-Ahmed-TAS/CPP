// ? COnstructor in derived class in Multilevel Inheritance

#include <iostream>

using namespace std;

class Students {
  long int id;

public:
  Students() {}
  Students(long int i) { id = i; }

  long int getId(void) { return id; }
};

class Marks : public Students {
protected:
  int math, biology, physics, chemistry;

public:
  Marks() {}
  Marks(long int id, int m, int b, int p, int c) : Students(id) {
    math = m, biology = b, physics = p, chemistry = c;
  }
};

class Result : public Marks {
protected:
  int total;
  float percentage;

public:
  Result() {}
  Result(long int id, int m, int b, int p, int c) : Marks(id, m, b, p, c) {
    total = math + biology + physics + chemistry;
    percentage = (total / 4);
  }

  void display(void);
};

void Result::display(void) {
  cout << "ID: " << getId() << endl;
  cout << "Math: " << math << endl;
  cout << "Biology: " << biology << endl;
  cout << "Physics: " << physics << endl;
  cout << "Chemistry: " << chemistry << endl;
  cout << "Total: " << total << endl;
  cout << "Percentage: " << percentage << "%" << endl;
}

void getInput(void) {}

int main() {

  long int id;
  int m, b, p, c;
  Result r1;

  cout << "Enter ID: ";
  cin >> id;
  cout << "Enter Math Marks: ";
  cin >> m;
  cout << "Enter Biology Marks: ";
  cin >> b;
  cout << "Enter Physics Marks: ";
  cin >> p;
  cout << "Enter Chemistry Marks: ";
  cin >> c;

  r1 = Result(id, m, b, p, c);
  

  r1.display();

  return 0;
}