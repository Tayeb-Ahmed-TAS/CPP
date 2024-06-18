#include <iostream>

using namespace std;

class Complex {
  int real, imaginary;

public:
  Complex() {}

  Complex(int real, int imaginary) {
    this->real = real;
    this->imaginary = imaginary;
  }

  void getData(void) { cout << real << " + " << imaginary << "i" << endl; }
};

int main() {

  //   Complex *ptr = new Complex(3, 5);

  // Or,

  Complex *ptr = new Complex;

  *ptr = Complex(5, 8);

  ptr->getData();

  return 0;
}