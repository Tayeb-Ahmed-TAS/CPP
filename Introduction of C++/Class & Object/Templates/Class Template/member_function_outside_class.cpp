#include <iostream>

using namespace std;

template <class T>

class Demo_class {
  T data;

public:
  Demo_class(T data) { this->data = data; }

  void display(void);
};

template <class T>

void Demo_class<T>::display(void) {
  cout << data << endl;
}

int main() {

  Demo_class<string> obj("Hello World !");
  obj.display();

  return 0;
}