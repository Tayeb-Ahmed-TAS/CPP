# Standard Template Library

- STL is used for Data Structures and Algorithms (DSA).
- It is a library of Generic Classes and Functions.
- It is a generalized library and so, its components are parameterized.

## Why use STL?

- Reuse well tested components.
- Time saving.
- Reliable.
- Efficient.
- STL is used because it's a good idea not to **Reinvent** the wheel.

## Components of STL

1. **Algorithms**: Algorithms are the set of procedures that are used to perform operations such as searching, sorting, counting, manipulating on the contents of containers. Ex: `Sorting`, `Search`, `Mergeing`, `Reversing`, etc.
    - They are independent of the containers.
    - They can be used with different containers.
    - They are implemented using templates.

2. **Containers**: Containers are objects that stores data. The data can be of any type. The container can be a collection of homogeneous or heterogeneous elements. Ex: `vector`, `list`, `deque`, `set`, `map`, etc.
    - They use templates to store any type of data.

3. **Iterators**: Iterators are objects that points to an element in a container. They are used to iterate through the elements of the container. Ex: `begin()`, `end()`, `rbegin()`, `rend()`, etc.
    - Handled just like pointers.
    - Connects algorithms with the containers.

### Illustration of how these 3 components work together

![STL Example](https://github.com/Tayeb-Ahmed-TAS/Images/blob/9ae5d928b40d66c52edee527935c756a3e2e7467/STL%20EXAMPLE.png)

`Suppose we have a container of integers, and we want to sort them in ascending order. We will have pointers which will help moving elements to places by pointing to it, following a well-constructed algorithm. So, here a container gets sorted by following an algorithm by the use of pointers. This is how they work in accordance with each other.`

![STL Example 2](https://github.com/Tayeb-Ahmed-TAS/Images/blob/ca8e2112c9009b3e89bf3163d1c37358dbe63216/stl_diagram_2.png)

## Containers

### Types of Containers
