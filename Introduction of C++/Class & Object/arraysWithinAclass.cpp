#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

class student {

public:
  char name[30], roll[10];

  int b, e, m;

  void input() {

    cout << "\nName: ";

    while (getchar() != '\n')
      ;

    gets(name);

    cout << "\nRoll: ";

    gets(roll);

    cout << "\nMarks in Biology: ";

    cin >> b;

    cout << "\nMarks in English: ";

    cin >> e;

    cout << "\nMarks in Math: ";

    cin >> m;
  }

  void output() {

    cout << "\nName: " << name;

    cout << "\nRoll: " << roll;

    cout << "\nMarks in Biology: " << b;

    cout << "\nMarks in English: " << e;

    cout << "\nMarks in Math: " << m;

    cout << "\nTotal: " << b + e + m;

    cout << "\nAverage: " << (b + e + m) / 3;
  }
};

int main() {

  int i, n;

  cout << "\nHow many students : ";

  cin >> n;

  student *s;

  s = new student[n];

  for (i = 1; i <= n; i++) {

    cout << "\n\nStudent " << i;

    s[i].input();
  }

  for (i = 1; i <= n; i++) {

    cout << "\n\nStudent " << i;

    s[i].output();
  }

  getch();

  return 0;
}
