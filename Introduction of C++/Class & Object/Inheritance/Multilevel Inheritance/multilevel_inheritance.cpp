#include <iostream>

using namespace std;

class students {

protected:
  int roll;

public:
  void set_roll(int);

  void get_roll(void);
};

void students::set_roll(int r) { roll = r; }

void students::get_roll() { cout << "The roll number is " << roll << endl; }

class exam : public students {

protected:
  float maths, physics;

public:
  void set_marks(float, float);

  void get_marks(void);
};

void exam::set_marks(float m1, float m2) {

  maths = m1;

  physics = m2;
}

void exam::get_marks() {

  cout << "The marks obtained in maths are " << maths << endl;

  cout << "The marks obtained in physics are " << physics << endl;
}

class result : public exam {

  float percentage;

public:
  void display() {

    percentage = (maths + physics) / 2;

    get_roll();

    get_marks();

    cout << "Your percentage is " << percentage << "%" << endl;
  }
};

int main() {

  result Maria;

  Maria.set_roll(17);

  Maria.set_marks(93.5, 90);

  Maria.display();

  return 0;
}