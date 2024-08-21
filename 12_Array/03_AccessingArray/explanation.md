# Accessing Values in Arrays and Working with 2D Arrays in C

## Overview

In C programming, arrays are used to store multiple values of the same type in a single variable. They are particularly useful for managing and manipulating large sets of data. Understanding how to access and manipulate array elements, including pointers to arrays and multi-dimensional arrays, is crucial for efficient programming.

## Code Explanation

```c
#include <stdio.h> 

int main(){
    int arra[] = {1, 8, 3};
    for(int i = 0; i < 3; i++){
        printf("Addres of %d is %u\n", arra[i], &arra[i]);
    }

    int* ptr_to_arra = arra;
    printf("Pointer to array is %u\n", ptr_to_arra); // `ptr_to_arra` is equal to `&arra[0]`

    for(int i = 0; i < 3; i++){
        printf("Value at %u is %d\n", ptr_to_arra, *ptr_to_arra);
        ptr_to_arra++;
    }

    // 2-d array
    int arry2D[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    printf("Acessing value in 2-d array at 1st row, 1st column => %d\n", arry2D[0][0]);  // Acessing value in 2-d arry <array_name>[row][col], where row and column start from 0 to n-1


    // Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

    int row;
    int col;
    int number;
    printf("Create 2-d array"); // 2-d array is same as matrix
    printf("Enter number of row: ");
    scanf("%d", &row);
    printf("Enter number of col: ");
    scanf("%d", &col);
    int ary[row][col];
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for [%d][%d] :", i+1, j+1);
            scanf("%d", &number);
            ary[i][j] = number;
        }
    }

    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", ary[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
```

### Explanation

1. **Accessing Values in a 1-D Array:**
   - **Array Declaration and Initialization:**
     ```c
     int arra[] = {1, 8, 3};
     ```
     This line declares an array `arra` with 3 elements and initializes it with values `1, 8, 3`.

   - **Printing Memory Addresses:**
     ```c
     for(int i = 0; i < 3; i++){
         printf("Addres of %d is %u\n", arra[i], &arra[i]);
     }
     ```
     This loop prints the memory addresses of each element in the array. The address can be accessed using `&arra[i]`, where `i` is the index of the element.

   - **Pointer to Array:**
     ```c
     int* ptr_to_arra = arra;
     ```
     Here, `ptr_to_arra` is a pointer to the first element of the array `arra`. `int* ptr_to_arra` is equivalent to writing `&arra[0];`.

   - **Accessing Array Elements Using Pointers:**
     ```c
     for(int i = 0; i < 3; i++){
         printf("Value at %u is %d\n", ptr_to_arra, *ptr_to_arra);
         ptr_to_arra++;
     }
     ```
     This loop accesses the values of the array using the pointer `ptr_to_arra`. It prints the value at the memory address stored in `ptr_to_arra` and then increments the pointer to point to the next element in the array.

2. **Accessing Values in a 2-D Array:**
   - **2-D Array Declaration and Initialization:**
     ```c
     int arry2D[3][2] = {
         {1, 2},
         {3, 4},
         {5, 6}
     };
     ```
     This line declares a 2-dimensional array `arry2D` with 3 rows and 2 columns, and initializes it with the specified values.

   - **Accessing Specific Element:**
     ```c
     printf("Acessing value in 2-d array at 1st row, 1st column => %d\n", arry2D[0][0]); 
     ```
     This line accesses the element in the first row and first column of the 2-D array using `arry2D[0][0]`.

   - **Creating a 2-D Array with User Input:**
     - The code prompts the user to enter the number of rows and columns for a 2-D array.
     - It then allows the user to input values for each element of the array.
     - Finally, the array is printed row by row.

## Output

The output of the program will look something like this:

```plaintext
Addres of 1 is 6422288
Addres of 8 is 6422292
Addres of 3 is 6422296
Pointer to array is 6422288
Value at 6422288 is 1
Value at 6422292 is 8
Value at 6422296 is 3
Acessing value in 2-d array at 1st row, 1st column => 1
Create 2-d array
Enter number of row: 2
Enter number of col: 2
Enter value for [1][1] :5
Enter value for [1][2] :10
Enter value for [2][1] :15
Enter value for [2][2] :20
5   10  
15  20
```

## Summary of Array Operations
- **1-D Arrays:** Access elements using the index (`arra[i]`) or a pointer to the first element.
- **2-D Arrays:** Access elements using two indices (`arry2D[row][col]`) or a pointer with appropriate offset calculations.
- **Pointer Arithmetic:** Pointers can be incremented/decremented to traverse arrays.