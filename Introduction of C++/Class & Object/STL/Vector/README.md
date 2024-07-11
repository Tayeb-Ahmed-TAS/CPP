# Vector

## Header File

```cpp
#include <vector>
```

## The syntax we use to define a vector is

```cpp
vector<data_type> vector_name;
```

[**Vector Reference**](https://cplusplus.com/reference/vector/vector/)

## Iterators

***Iterators are used to point at the memory addresses of STL containers.***

```cpp
vector<data_type>::iterator it_name;
```

```cpp
vector<data_type>::iterator it_name=vector_name.begin();

// begin() returns an iterator pointing to the first element in the vector container.
```

```cpp
vector<data_type>::iterator it_name=vector_name.end();

// end() returns an iterator pointing to the past-the-end element in the vector container.
```

## **at()** Function

- The `at()` function is used to access the elements of the vector.
- `at()` will tell us where the element is present in the vector.

```cpp
vector_name.at(index);
```
