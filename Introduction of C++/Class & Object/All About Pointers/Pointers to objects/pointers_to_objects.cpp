#include <iostream>

using namespace std;

class Complex {
  int real, imaginary;

public:
  void getData() {
    cout << "The real part is: " << real << endl;
    cout << "The imaginary part is: " << imaginary << "i" << endl;
  }

  void setData(int a, int b) {
    real = a;
    imaginary = b;
  }
};

int main() {

  Complex c1;

  Complex *ptr = &c1;

  // ? OR...

  //   Complex *ptr = new Complex;

  // Paranthesis is necessary

  (*ptr).setData(9, 26);

  // Paranthesis is necessary

  (*ptr).getData();

  return 0;
}