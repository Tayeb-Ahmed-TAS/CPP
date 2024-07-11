#include <iostream>

using namespace std;

template <class t>

class Array_Operations {
  int size;
  t *arr;

public:
  Array_Operations() {}
  Array_Operations(int size, t *arr) {
    this->size = size;
    this->arr = arr;
  }

  t sumProduct(Array_Operations &obj);
  void display(Array_Operations &obj);
};

template <class t>

t Array_Operations<t>::sumProduct(Array_Operations &obj) {
  t sum = 0;

  for (int i = 0; i < size; i++) {
    sum += this->arr[i] + obj.arr[i];
  }

  return sum;
}

template <class t>

void Array_Operations<t>::display(Array_Operations &obj) {
  cout << "Sum of the 2 array is : " << sumProduct(obj) << endl;
}

int main() {

  Array_Operations<int> obj1, obj2;
  int size = 3, arr1[] = {1, 2, 3}, arr2[] = {4, 5, 6};

  obj1 = Array_Operations<int>(size, arr1);
  obj2 = Array_Operations<int>(size, arr2);

  obj1.display(obj2);

  return 0;
}