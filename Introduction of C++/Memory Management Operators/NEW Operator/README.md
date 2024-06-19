# **new** Operator

- **new** operator is used for dynamic memory allocation in C++.
- **new** operator can be used to create object of any type.

## Syntax - 1

```cpp

        pointer-variable = new data-type;
```

### Or

```cpp

        pointer-variable = new data-type(value);
```

### Example

```cpp

        int *p = new int;
        *p = 10;
```

### Or

```cpp

        int *p = new int(10);
```

## Syntax - 2

```cpp

        pointer-variable = new data-type[size];
```

### Or

```cpp

        pointer-variable = new data-type[size](value);
```

### Example of Syntax - 2

```cpp

        int *p = new int[5];
        p[0] = 10;
        p[1] = 20;
        p[2] = 30;
        p[3] = 40;
        p[4] = 50;
```

### Or

```cpp

        int *p = new int[5]{10, 20, 30, 40, 50};
```
