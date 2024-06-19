# Pointers to Derived Classes

In C++, a pointer of a base class can point to an object of a derived class. When a base class pointer points to a derived class object, we can access only the members of the base class using that pointer. To access the members of the derived class, we need to typecast the pointer to the derived class.

```cpp
#include <iostream>
using namespace std;

class Base {
    public:
        void display() {
            cout << "Display of Base" << endl;
        }
};

class Derived : public Base {
    public:
        void display() {
            cout << "Display of Derived" << endl;
        }
};

int main() {
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    basePtr->display(); // It will call the display() function of the base class not the derived class because the pointer is of the base class. 

    return 0;
}
```
