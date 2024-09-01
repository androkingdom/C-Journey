# Pointers in C: Pointer to a Pointer

## Overview

In C programming, pointers are variables that store the memory address of another variable. They are powerful tools that allow you to manipulate data more efficiently by directly accessing memory. Understanding how pointers work is essential for performing advanced operations in C.

## Code Example

```c
#include <stdio.h> 

int main(){
    int i = 10;            // A normal integer variable
    int* j = &i;           // Pointer 'j' pointing to the address of 'i'

    int** k = &j;          // Pointer 'k' pointing to the address of pointer 'j'

    printf("Value of i is %d\n", i);        // Direct access to 'i'
    printf("Value of i using *j is %d\n", *j);  // Access 'i' using pointer 'j'
    printf("Value of i using **(&j) is %d\n", **(&j));  // Access 'i' using pointer to pointer 'k'
    printf("Value of i using **k is %d\n", **k);   // Access 'i' using pointer to pointer 'k'
    
    return 0;
}
```

## Explanation

### Pointer to a Variable (`j`)

- **Declaration:** `int* j = &i;`
  - Here, `j` is a pointer that stores the memory address of the variable `i`.
  - The `&` operator is used to retrieve the address of `i`.
  - The `*` operator is used to access the value stored at the address that `j` points to.

### Pointer to a Pointer (`k`)

- **Declaration:** `int** k = &j;`
  - `k` is a pointer to another pointer `j`.
  - The `*` operator is used twice (`**`) to access the value that `k` points to indirectly through `j`.

### Operators Used

- **`&` Operator:**
  - The `&` operator returns the address of a variable.
  - Example: `&i` gives the address of the variable `i`.

- **`*` Operator:**
  - The `*` operator is used to access the value stored at a particular memory address.
  - Example: `*j` accesses the value of `i` using the pointer `j`.

- **`**` Operator:**
  - The `**` operator is used when you have a pointer to a pointer.
  - Example: `**k` accesses the value of `i` using the pointer `k`, which points to the pointer `j`, which in turn points to `i`.

## Output

The output of the provided code will be:

```
Value of i is 10
Value of i using *j is 10
Value of i using **(&j) is 10
Value of i using **k is 10
```

This output shows that no matter how many levels of pointers you use, you can ultimately access the value of the variable `i`.

## Summary

Understanding pointers in C is crucial for efficient memory manipulation. The ability to use pointers to variables and pointers to pointers allows for more complex and powerful code. The `&`, `*`, and `**` operators are fundamental in navigating through memory addresses and accessing the values stored there.