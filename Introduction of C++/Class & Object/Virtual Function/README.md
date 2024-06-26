# Virtual Function

- Virtual function is a member function in the base class that you expect to redefine in derived classes.
- When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the function.
- Virtual function is a function that is declared in the base class using the keyword virtual and is redefined in the derived class.
- It is used to tell the compiler to perform late binding on the function.

## Why Virtual Function?

- When a function is declared as virtual, it is resolved at runtime.
- This is called late binding.
- When a function is not declared as virtual, it is resolved at compile time.
- This is called early binding.

## Syntax

```cpp
class Base {
public:
    virtual void show() {
        // code
    }
};

class Derived : public Base {
public:
    void show() {
        // code
    }
};
```

## Rules for Virtual Function

1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual function in the base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
