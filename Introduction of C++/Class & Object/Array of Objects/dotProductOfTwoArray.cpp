#include <iostream>

using namespace std;

class Vector {
public:
  int *arr, size;

  Vector(int *arr, int size) {
    this->arr = arr;
    this->size = size;
  }

  int dotProduct(Vector &v) {
    int d = 0;
    for (int i = 0; i < size; i++) {
      d += this->arr[i] * v.arr[i];
    }
    return d;
  }
};

int main() {

  int arr1[] = {1, 2, 3};
  int arr2[] = {4, 5, 6};
  Vector v1(arr1, 3);
  Vector v2(arr2, 3);

  int result = v1.dotProduct(v2);
  cout << "Dot product of v1 and v2 is: " << result << endl;

  return 0;
}