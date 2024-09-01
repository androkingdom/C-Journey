# Basic Data Types in C
## Overview

In C programming, basic data types are fundamental types used to declare variables and define the kind of data they can store. Understanding these types is crucial for effective memory management and program design.

## Integer Types
- **int**: Typically used to store integer values. The size is usually 4 bytes.
- **short**: Used for smaller integer values. The size is usually 2 bytes.
- **long**: Used for larger integer values. The size is usually 4 or 8 bytes.
- **long long**: Used for even larger integer values. The size is usually 8 bytes.
- **unsigned** versions: `unsigned int`, `unsigned short`, `unsigned long`, `unsigned long long` are used to store only non-negative integer values.

## Floating-Point Types
- **float**: Used to store single-precision floating-point numbers. The size is usually 4 bytes.
- **double**: Used to store double-precision floating-point numbers. The size is usually 8 bytes.
- **long double**: Used for extended precision floating-point numbers. The size can vary but is often 12 or 16 bytes.

## Character Types
- **char**: Used to store single characters. The size is 1 byte.
- **unsigned char**: Used to store single characters as unsigned values.
- **signed char**: Used to store single characters as signed values.

## Example Usage

```c
#include <stdio.h>

int main() {
    int a = 10;               // Integer
    float b = 5.5;            // Floating-point
    char c = 'A';             // Character
    double d = 10.5;          // Double precision floating-point
    unsigned int e = 20;      // Unsigned integer

    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("char: %c\n", c);
    printf("double: %lf\n", d);
    printf("unsigned int: %u\n", e);

    return 0;
}
```