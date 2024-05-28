#include <iostream>

using namespace std;

class BankDeposit {
  int principle, year;
  float interestRate, returnValue;

public:
  BankDeposit() {} // Empty Constructor for default constructor and also for the
                   // object creation without any parameter
  BankDeposit(int p, int y, float r); // r can be a value like 0.04
  BankDeposit(int p, int y, int R);   // R can be a value like 4 (as 4%)

  void display(void);
};

BankDeposit::BankDeposit(int p, int y, float r) {
  principle = p;
  year = y;
  interestRate = r;
  returnValue = principle;

  for (int i = 0; i < year; i++) {
    returnValue = returnValue * (1 + interestRate);
  }

  display();
}

BankDeposit::BankDeposit(int p, int y, int R) {
  principle = p;
  year = y;
  interestRate = float(R) / 100;
  returnValue = principle;

  for (int i = 0; i < year; i++) {
    returnValue = returnValue * (1 + interestRate);
  }

  display();
}

void BankDeposit::display(void) {

  string s;

  (year > 1) ? s = " years" : s = " year";

  cout << endl
       << "Principle amount was " << principle << ". And return value after "
       << year << s << " is " << returnValue << endl;
}

int main() {

  BankDeposit bd1, bd2; // This will call the empty constructor

  int p, y;
  float r;
  int R;

  cout
      << "Enter the value of Principla amount, year, and interest rate in float"
      << endl;

  cin >> p >> y >> r;

  bd1 = BankDeposit(p, y, r);

  cout << "Enter the value of Principla amount, year, and interest rate %"
       << endl;

  cin >> p >> y >> R;

  bd1 = BankDeposit(p, y, R);

  return 0;
}