## **delete** Operator

- **delete** operator is used for releasing memory space.

### Syntax - 1:

        delete pointer-variable;

### Example:

        int *p = new int;
        *p = 10;

        delete p;

        or,

        int *p = new int(10);

        delete p;

### Syntax - 2:

        delete[size] pointer-variable;

### Example:

        int *p = new int[5];
        p[0] = 10;
        p[1] = 20;
        p[2] = 30;
        p[3] = 40;
        p[4] = 50;

        delete[] p;

        or,

        int *p = new int[5]{10, 20, 30, 40, 50};

        delete[] p;
