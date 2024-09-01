# Pointer Arithmetic in C
## Overview
Pointer arithmetic allows you to perform operations on pointers, enabling efficient data manipulation and traversal, especially with arrays. This capability is crucial for tasks like navigating through arrays and handling dynamically allocated memory.

## Code Explanation

```c
#include <stdio.h> 

int main(){
    int arr[3] = {1, 2, 3}; // 1 integer = 4 bytes
    // This will reserve 4 x 3 = 12 bytes in memory (4 bytes for each integer) 

    // POINTER ARITHMETIC
    int a = 10;
    int* pointer = &a;
    printf("Value of pointer is %u\n", pointer);
    pointer++;
    printf("Value of pointer is %u\n", pointer);
    return 0;
}
```

### Understanding Pointer Arithmetic

1. **Pointer Declaration and Initialization:**
   ```c
   int a = 10;
   int* pointer = &a;
   ```
   - `int a = 10;` declares an integer variable `a` and initializes it with the value `10`.
   - `int* pointer = &a;` declares a pointer `pointer` that stores the address of the variable `a`.

2. **Pointer Arithmetic:**
   ```c
   printf("Value of pointer is %u\n", pointer);
   pointer++;
   printf("Value of pointer is %u\n", pointer);
   ```
   - `pointer` initially points to the address of `a`.
   - `pointer++` increments the pointer. This operation moves the pointer to the next memory location based on the type of data it points to.

3. **Memory Layout:**
   - Each integer typically occupies 4 bytes in memory (though this can vary depending on the system).
   - When you increment a pointer of type `int*`, it moves by `sizeof(int)` bytes, which is 4 bytes in this case.

4. **Example Calculation:**
   - Suppose `pointer` initially points to address `0x1000`.
   - After `pointer++`, it points to address `0x1004` (0x1000 + 4 bytes).

5. **Printing Pointer Values:**
   - The `%u` format specifier in `printf` prints the memory address stored in the pointer. 
   - The change in the address after `pointer++` reflects the fact that it has moved to the next integer's position.

### Allowed Pointer Operations

Pointer arithmetic supports the following operations:

1. **Increment (`++`):**
   - Moves the pointer to the next element of the type it points to.
   - Example: `pointer++` moves the pointer to the next `int` in memory.

2. **Decrement (`--`):**
   - Moves the pointer to the previous element of the type it points to.
   - Example: `pointer--` moves the pointer to the previous `int` in memory.

3. **Addition (`+`):**
   - Adds an integer value to the pointer, moving it forward by that many elements of the type it points to.
   - Example: `pointer + 2` moves the pointer forward by 2 `int` elements.

4. **Subtraction (`-`):**
   - Subtracts an integer value from the pointer, moving it backward by that many elements of the type it points to.
   - Example: `pointer - 1` moves the pointer backward by 1 `int` element.

5. **Pointer Difference (`-`):**
   - Computes the difference between two pointers, giving the number of elements between them.
   - Example: `pointer2 - pointer1` gives the number of elements between `pointer1` and `pointer2`.

6. **Comparison (`==`, `!=`, `<`, `>`, `<=`, `>=`):**
   - Compares two pointers to see if they point to the same location or to see their relative positions in memory.

## Summary

- **Pointer Arithmetic** allows you to perform operations such as incrementing, decrementing, and adding/subtracting values with pointers.
- **Incrementing a pointer** moves it forward by the size of the type it points to.
- **Decrementing a pointer** moves it backward by the size of the type it points to.