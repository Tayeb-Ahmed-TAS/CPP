#include <iostream>

using namespace std;

template <class T>

class Vector {
public:
  T *arr;
  int size;

  Vector(int size) {
    this->size = size;
    arr = new T[size];
  }

  T dotProduct(Vector &v) {
    T d = 0;
    for (int i = 0; i < size; i++) {
      d += this->arr[i] * v.arr[i];
    }

    return d;
  }
};

int main() {

  int size = 3;

  Vector<float> v1(size);
  Vector<float> v2(size);

  v1.arr[0] = 1.5;
  v1.arr[1] = 2.0;
  v1.arr[2] = 3.3;

  v2.arr[0] = 1.1;
  v2.arr[1] = 2.1;
  v2.arr[2] = 3.1;

  float result;

  result = v1.dotProduct(v2);

  cout << "Dot product of v1 and v2 is: " << result << endl;

  return 0;
}