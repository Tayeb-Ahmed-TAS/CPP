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

  Complex *ptr = new Complex;

  //   (*ptr).setData(9, 26);
  // ? is exactly same as

  ptr->setData(9, 26);

  //   (*ptr).getData();
  // ? is as good as

  ptr->getData();

  return 0;
}