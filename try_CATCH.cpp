// Divide two numbers using try catch block

#include <iostream>
#include <stdexcept>

using namespace std;

int main() {

  int a, b;

  cout << "Enter two integers =>" << endl;
  cin >> a >> b;

  try {

    if (b == 0)
      throw runtime_error("Math Error : Division by zero !");

    else {
      float div = (float)a / b;
      cout << a << " / " << b << " = " << div << endl;
    }
  } catch (runtime_error &e) {
    cout << "Exception occured !" << endl;
    cout << e.what() << endl;
  }

  return 0;
}
