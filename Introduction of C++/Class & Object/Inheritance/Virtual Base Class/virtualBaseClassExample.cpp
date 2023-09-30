// Diagram of this code =>
// https://github.com/Tayeb-Ahmed-TAS/Images/blob/main/example%20code%20diagramn%20of%20virtual%20base%20class.png

#include <iostream>

using namespace std;

class Students {
protected:
  int roll;

public:
  void set_roll(int r) { roll = r; }

  void print_roll(void) { cout << "Your roll is " << roll << endl; }
};

class Test : virtual public Students {
protected:
  float math, physics;

public:
  void set_marks(float m, float p) {
    
    math = m;
    physics = p;
  }

  void print_marks(void) {
    cout << "Your result is here :" << endl
         << "Math : " << math << endl
         << "Physics : " << physics << endl;
  }
};

class Sports : virtual public Students {
protected:
  float score;

public:
  void set_score(float sc) { score = sc; }

  void print_score(void) { cout << "Your PT score is " << score << endl; }
};

class Result : public Test, public Sports {
private:
  float total;

public:
  void display(void) {
    total = math + physics + score;
    print_roll();
    print_marks();
    print_score();
    cout << "Your total score is " << total << endl;
  }
};

int main() {

  Result Shorna;
  Shorna.set_roll(2026);
  Shorna.set_marks(78.9, 99);
  Shorna.set_score(9);
  Shorna.display();

  return 0;
}