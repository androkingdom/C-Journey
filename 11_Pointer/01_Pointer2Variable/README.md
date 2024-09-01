# Pointers in C: Pointer Pointing to a Variable

## Overview

In C programming, a pointer is a variable that stores the memory address of another variable. This allows direct access to the memory location of the variable, enabling efficient manipulation of data. Understanding how pointers work, especially how they point to variables and how the `*` and `&` operators are used, is fundamental to mastering C.

## Code Example

```c
#include <stdio.h> 

int main(){
    int a = 28;
    int* b = &a;  // Pointer 'b' pointing to the memory address of 'a'

    printf("Memory address of %d is %p\n", a, b); // Displaying the memory address of 'a'

    printf("Value at %p is %d and %d", b, *b, *(&a)); // Displaying the value at the memory address
    return 0;
}
```

## Explanation

### Pointer Pointing to a Variable (`b`)

- **Declaration:** `int* b = &a;`
  - Here, `b` is a pointer of type `int*` that stores the memory address of the variable `a`.
  - The `&` operator is used to obtain the memory address of `a`, which is then stored in `b`.

### Use of `&` Operator

- **`&` Operator:**
  - The `&` operator is used to retrieve the memory address of a variable.
  - Example: `&a` gives the memory address of the variable `a`.
  - In the code, `b = &a` assigns the memory address of `a` to the pointer `b`.

### Use of `*` Operator

- **`*` Operator:**
  - The `*` operator is used to dereference a pointer, i.e., to access the value stored at the memory address that the pointer holds.
  - Example: `*b` accesses the value of `a` using the pointer `b`.
  - In the code, `*b` gives the value of `a` by dereferencing the pointer `b`.

### Code Output

The output of the provided code will be:

```
Memory address of 28 is 0061FF18
Value at 0061FF18 is 28 and 28
```

- The memory address displayed (`0061FF18`) will vary depending on your system.
- The value `28` is printed twice because both `*b` and `*(&a)` give the value of `a`.

## Summary

Pointers are a powerful feature in C that allows direct access to memory locations. By using pointers, you can efficiently manage and manipulate data. The `&` operator is used to get the memory address of a variable, while the `*` operator is used to access or manipulate the value at the memory address a pointer holds. Understanding these concepts is crucial for working with pointers in C.