# Call by Reference in C

## Overview

**Call by Reference** is a method in C programming where the address of a variable is passed to a function as an argument. This allows the function to modify the original variable's value since it has direct access to the variable's memory address. This method is particularly useful when you want a function to modify more than one variable or return multiple results.

## Code Explanation

```c
#include <stdio.h> 

// Function to change the value of a variable
void change(int* a) {
    // Modify the value pointed to by 'a'
    *a = *a * 20;
}

// Function to swap two variables
void swap(int* a, int* b) {
    int alpha = *a;  // Store the value of 'a' in a temporary variable
    *a = *b;         // Assign the value of 'b' to 'a'
    *b = alpha;      // Assign the value stored in 'alpha' to 'b'
}

int main() {
    // Using the change function
    int num = 1;
    change(&num);
    printf("Value of num is %d\n", num);

    // Using the swap function
    int num1 = 10;
    int num2 = 20;
    printf("Value of num1 is %d and num2 is %d\n", num1, num2); // Value before swap function
    swap(&num1, &num2);
    printf("Value of num1 is %d and num2 is %d\n", num1, num2); // Value after swap function

    return 0;
}
```

## Detailed Explanation

1. **change Function:**
   - **Prototype:** `void change(int* a);`
   - **Purpose:** The `change` function multiplies the value of the integer passed to it by 20.
   - **Call by Reference:** The function accepts an integer pointer `int* a`, which points to the memory address of the variable `num`. Inside the function, `*a` dereferences the pointer, allowing direct modification of the value stored at that address. After calling `change(&num)`, the value of `num` in the `main` function is updated.

2. **swap Function:**
   - **Prototype:** `void swap(int* a, int* b);`
   - **Purpose:** The `swap` function swaps the values of two integers passed to it.
   - **Call by Reference:** The function accepts two integer pointers `int* a` and `int* b`, which point to the memory addresses of `num1` and `num2`, respectively. By dereferencing these pointers, the function swaps the values stored at those addresses. This directly changes the values of `num1` and `num2` in the `main` function.

3. **Main Function:**
   - **Change Function:** Initially, `num` is set to 1. After calling `change(&num)`, the `num` value is updated to 20.
   - **Swap Function:** The values of `num1` and `num2` are swapped. Before the swap, `num1` is 10 and `num2` is 20. After calling `swap(&num1, &num2)`, the values are swapped: `num1` becomes 20, and `num2` becomes 10.

## Output
```
Value of num is 20
Value of num1 is 10 and num2 is 20
Value of num1 is 20 and num2 is 10
```

### Explanation of the Output:

1. **Change Function Output:**
   - `Value of num is 20`
     - The `change` function multiplies `num` (initially `1`) by `20`, resulting in `20`. This change is reflected in the `main` function because `num` was passed by reference.

2. **Swap Function Output:**
   - `Value of num1 is 10 and num2 is 20`
     - Before the swap, `num1` is `10` and `num2` is `20`.
   - `Value of num1 is 20 and num2 is 10`
     - After calling `swap(&num1, &num2)`, the values are swapped. Now, `num1` is `20` and `num2` is `10`.
    
---