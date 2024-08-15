# The `do-while` Loop in C

## Overview

The `do-while` loop in C is a variation of the `while` loop that ensures the code block is executed at least once before the condition is checked. This loop is useful when the code needs to be executed initially before any condition is evaluated.

## Code Example

```c
#include <stdio.h> 

int main(){
    int i = 0;

    do
    {
        printf("Hello World %d\n", i);
    } while (i != 0);
    printf("Loop Break After 1 Execution\n");
    
    do
    {
        printf("Hello World %d\n", i);
        i++;
    } while (i <= 9);    
    return 0;
}
```

## Code Explanation

1. **Initial `do-while` Loop**:
   - **`do`**: Starts the `do-while` loop.
     - **`printf("Hello World %d\n", i);`**: Prints "Hello World" followed by the value of `i`.
   - **`while (i != 0);`**: The loop condition checks if `i` is not equal to `0`. Since `i` is initialized to `0` and no changes are made to `i` within this loop, the loop body executes only once.
   - **`printf("Loop Break After 1 Execution\n");`**: Prints a message indicating the loop has broken after one execution.

2. **Second `do-while` Loop**:
   - **`do`**: Starts another `do-while` loop.
     - **`printf("Hello World %d\n", i);`**: Prints "Hello World" followed by the value of `i`.
     - **`i++;`**: Increments `i` by `1` in each iteration.
   - **`while (i <= 9);`**: Continues executing the loop as long as `i` is less than or equal to `9`.

3. **Quick Quiz Section**:
```c
    #include<stdio.h>

    int main(){
    // Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop

    int Range, zeros = 1;
    printf("Enter Number: ");
    scanf("%d", &Range);
    do{
        printf("%d\n", zeros);
        zeros++;
    }while(zeros <= Range);
    return 0;
    }
```
   - **`int Range, zeros = 1;`**: Declares `Range` for user input and initializes `zeros` to `1`.
   - **`printf("Enter Number: ");`**: Prompts the user to enter a number.
   - **`scanf("%d", &Range);`**: Reads the user input and stores it in `Range`.
   - **`do`**: Starts a `do-while` loop.
     - **`printf("%d\n", zeros);`**: Prints the current value of `zeros`.
     - **`zeros++;`**: Increments `zeros` by `1`.
   - **`while(zeros <= Range);`**: Continues executing the loop as long as `zeros` is less than or equal to `Range`.

## Output

When you run this program:

1. The first `do-while` loop prints "Hello World 0" once and then breaks.
2. The second `do-while` loop prints numbers from `0` to `9`.
3. The program then asks for a number and prints the first `n` natural numbers up to the input value.

### Example Output:

If the user enters `5`:

```
Hello World 0
Loop Break After 1 Execution
Hello World 0
Hello World 1
Hello World 2
Hello World 3
Hello World 4
Hello World 5
```