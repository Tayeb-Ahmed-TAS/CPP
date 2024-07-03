# C++ Template

## What is a template?

A template is a blueprint or formula for creating a generic class or a function. The library containers like iterators and algorithms are examples of generic programming and have been developed using template concept.

## Why use templates?

- DRY (Don't Repeat Yourself)
- Code Reusability
- Generic Programming
- Type Safety

### Syntax

```cpp

template <class T>

class className {
    T var1; // T can be any data type (int, float, char, etc.)

    ...
    ...
    ...

};

int main(){
    className <int> obj1;       // obj1 is an object of className with data type int
    className <float> obj2;     // obj2 is an object of className with data type float
    className <char> obj3;      // obj3 is an object of className with data type char
    ...
    ...
    ...

    return 0;
}

```

## Types of Templates

1. Function Template
2. Class Template

### Function Template

```cpp

template <class T>

T add(T a, T b){
    return a + b;
}

int main(){
    cout << add(5, 6) << endl;         // Output: 11
    cout << add(5.5, 6.6) << endl;     // Output: 12.1
    cout << add('A', 'B') << endl;     // Output: 131
    ...
    ...
    ...

    return 0;
}

```

### Class Template

```cpp

template <class T>

class className {
    T var1; // T can be any data type (int, float, char, etc.)

    public:
        className(T a){
            var1 = a;
        }

        T display(){
            return var1;
        }
};

int main(){
    className <int> obj1(5);       // obj1 is an object of className with data type int
    className <float> obj2(5.5);   // obj2 is an object of className with data type float
    className <char> obj3('A');    // obj3 is an object of className with data type char

    cout << obj1.display() << endl; // Output: 5
    cout << obj2.display() << endl; // Output: 5.5
    cout << obj3.display() << endl; // Output: A
    ...
    ...
    ...

    return 0;
}

```

### Templates with multiple parameters

```cpp

template <class T1, class T2>

class className {
    T1 var1; // T1 can be any data type (int, float, char, etc.)
    T2 var2; // T2 can be any data type (int, float, char, etc.)

    public:
        className(T1 a, T2 b){
            var1 = a;
            var2 = b;
        }

        void display(){
            cout << var1 << " " << var2 << endl;
        }
};

int main(){
    className <int, float> obj1(5, 5.5);       // obj1 is an object of className with data type int and float
    className <float, char> obj2(5.5, 'A');    // obj2 is an object of className with data type float and char
    className <char, int> obj3('A', 5);        // obj3 is an object of className with data type char and int

    obj1.display(); // Output: 5 5.5
    obj2.display(); // Output: 5.5 A
    obj3.display(); // Output: A 5
    ...
    ...
    ...

    return 0;
}

```
