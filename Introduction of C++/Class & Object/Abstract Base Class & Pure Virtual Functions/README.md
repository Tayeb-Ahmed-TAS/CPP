# Abstract Base Class & Pure Virtual Functions

## Abstract Base Class

- Abstract Base Class is a class that has at least one pure virtual function.
- Abstract Base Class is a class that cannot be instantiated.
- Abstract Base Class is a class that can have data members and concrete member functions.

## Pure Virtual Functions

- Pure Virtual Functions are virtual functions that are declared in the base class and are assigned to 0.
- Pure Virtual Functions do not have a body.
- Pure Virtual Functions must be overridden in the derived class.
- It's also caled ***Do-Nothing Function***.
- Pure Virtual Functions must be overridden in the derived class.
- Pure Virtual Functions are used to make the base class Abstract.

### Syntax

```cpp

class Base_class_name {
    public:
        virtual void function_name() = 0;
};

```

### Example

```cpp
#include <iostream>
using namespace std;

class Shape {
    public:
        virtual void draw(void) = 0;
};

class Circle : public Shape {
    public:
        void draw(void) {
            cout << "Drawing Circle" << endl;
        }
};

class Rectangle : public Shape {
    public:
        void draw(void) {
            cout << "Drawing Rectangle" << endl;
        }
};

int main() {
    Shape *s;
    Circle c;
    Rectangle r;

    s = &c;
    s->draw();

    s = &r;
    s->draw();

    return 0;
}
```

## Why Pure Virtual Functions?

- A pure virtual function in C++ is used to define an interface or an abstract base class, which cannot be instantiated on its own but can be used as a blueprint for creating concrete derived classes.
- Pure virtual functions are used to create abstract classes, which are used to provide an interface for derived classes.
- Pure virtual functions are used to define a protocol for derived classes to follow.

    ***If the Base class has a pure virtual function, then the derived class must override the pure virtual function.***
