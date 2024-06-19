# **delete** Operator

- **delete** operator is used for releasing memory space.

## Syntax - 1

```cpp

        delete pointer-variable;
```

### Example

```cpp

        int *p = new int;
        *p = 10;

        delete p;

```

### Or

```cpp

        int *p = new int(10);

        delete p;
```

## Syntax - 2

```cpp

        delete[size] pointer-variable;
```

### Example of Syntax - 2

```cpp

        int *p = new int[5];
        p[0] = 10;
        p[1] = 20;
        p[2] = 30;
        p[3] = 40;
        p[4] = 50;

        delete[] p;
```

### Or

```cpp

        int *p = new int[5]{10, 20, 30, 40, 50};

        delete[] p;
```
