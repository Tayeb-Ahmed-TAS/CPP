#include <iostream>

using namespace std;

class students {

  string fname, lname, dept, name;
  int roll_no;

public:
  void getdata();

  void showdata() {
    name = fname + " " + lname;
    cout << "Name: " << name << endl;
    cout << "Department: " << dept << endl;
    cout << "Roll number: " << roll_no << endl;
  }
};

void students::getdata() {
  cout << "Enter the first name of the student: ";
  cin >> fname;
  cin.ignore(); // ? To clear buffer
  cout << "Enter the last name of the student: ";
  cin >> lname;
  cin.ignore(); // ? To clear buffer
  cout << "Enter the department of the student: ";
  cin >> dept;
  cin.ignore(); // ? To clear buffer
  cout << "Enter the roll number of the student: ";
  cin >> roll_no;
}

int main() {

  students s1;
  s1.getdata();
  s1.showdata();

  return 0;
}