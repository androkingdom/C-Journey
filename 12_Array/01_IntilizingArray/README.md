
# Array in C

## Overview

Arrays are a fundamental data structure in C programming that allow the storage of multiple values of the same type in a contiguous block of memory.

## Code

```c
#include <stdio.h> 

int main(){
    // <datatype> <variable>[n]
    // Value can be store upto n-1, because 0 is included (so, 0 to n-1)
    int store[4]; // Initialize a variable as Array
    store[0] = 10; // Element 1
    store[1] = 20; // Element 2
    store[2] = 30; // Element 3
    store[3] = 40; // Element 4
    printf("Store have %d, %d, %d, %d\n", store[0], store[1], store[2], store[3]); // Value access

    int marks[5];
    for(int i = 0; i < 5; i++){
        printf("Enter number: ");
        scanf("%d", &marks[i]); // Reading user input into the array
    }
    // printf("Marks have %d, %d, %d, %d, %d\n", marks[0], marks[1], marks[2], marks[3], marks[4]); 
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("Marks at %d index is %d\n", i, marks[i]); // Displaying each element
    }

    // Other way to initialize Array
    int marks2[4] = {1, 2, 4, 6}; // All at a time

    // Display all marks with index
    for (int i = 0; i < 4; i++){
        printf("Marks at %d is %d\n", i, marks2[i]); 
    }
    
    int cgp[] = {1, 2, 3}; // The `n` is optional, int cgp[n]
    for (int i = 0; i < 3; i++){
        printf("%d\n", cgp[i]);
    }
    return 0;
}
```

## Explanation

### Array Declaration and Initialization

- **Declaration:** `int store[4];` declares an array named `store` that can hold 4 integers. Array indices start from 0, so valid indices are 0 to 3.
- **Initialization:** The array is initialized with specific values:
  ```c
  store[0] = 10;
  store[1] = 20;
  store[2] = 30;
  store[3] = 40;
  ```
- **Accessing Values:** The values of the array elements are printed using:
  ```c
  printf("Store have %d, %d, %d, %d\n", store[0], store[1], store[2], store[3]);
  ```

### Reading User Input into an Array

- **Declaration:** `int marks[5];` declares an array with 5 elements.
- **Input:** The `for` loop prompts the user to enter 5 integers, which are stored in the `marks` array:
  ```c
  for(int i = 0; i < 5; i++){
      printf("Enter number: ");
      scanf("%d", &marks[i]);
  }
  ```
- **Displaying Values:** Another `for` loop prints each element along with its index:
  ```c
  for (int i = 0; i < 5; i++){
      printf("Marks at %d index is %d\n", i, marks[i]);
  }
  ```

### Alternative Array Initialization

- **Initialization:** Arrays can be initialized at declaration. For example:
  ```c
  int marks2[4] = {1, 2, 4, 6};
  ```
- **Displaying Values:** Values are displayed using:
  ```c
  for (int i = 0; i < 4; i++){
      printf("Marks at %d is %d\n", i, marks2[i]);
  }
  ```

### Array Without Size Specification

- **Initialization Without Size:** The size can be omitted, and the compiler determines it based on the number of elements:
  ```c
  int cgp[] = {1, 2, 3};
  ```
- **Displaying Values:** Values are displayed using:
  ```c
  for (int i = 0; i < 3; i++){
      printf("%d\n", cgp[i]);
  }
  ```

## Summary

- **Declaration:** Use `<datatype> <variable>[n];` where `n` is the number of elements.
- **Initialization:** Can be done at declaration or later using loops.
- **Accessing Elements:** Use `array[index]` where `index` ranges from `0` to `n-1`.
- **Optional Size:** The size of an array can be inferred from the initializer list.