#include <iostream>

using namespace std;

template <class T>

class Vector {
public:
  T *arr;
  int size;

  Vector(T *arr, int size) {
    this->arr = arr;
    this->size = size;
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

  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {4, 5, 6, 7, 8};

  Vector<int> v1(arr1, 5);
  Vector<int> v2(arr2, 5);

  int result = v1.dotProduct(v2);

  cout << "Dot product of v1 and v2 is: " << result << endl;

  return 0;
}