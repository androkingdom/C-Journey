# User Input and `scanf()` Function in C

## Overview

In C programming, user input is obtained using the `scanf()` function. This function reads formatted input from the standard input (usually the keyboard) and stores it in specified variables.
Let's break down the code and explain the `scanf()` function and user input in C.

## Code Explanation

```c
#include <stdio.h> 

int main(){
    int age;
    scanf("%d", &age);
    printf("Your Age Is %d", age); 
    return 0;
}
```

1. **`#include <stdio.h>`**: This line includes the standard input-output library in C, which is necessary for using functions like `scanf()` and `printf()`.

2. **`int main()`**: This is the main function where the execution of the program begins.

3. **`int age;`**: This line declares an integer variable named `age`.

4. **`scanf("%d", &age);`**: This line is used to take input from the user. Let's break down `scanf()`:
   - `scanf()` is a function that reads formatted input from the standard input (usually the keyboard).
   - `"%d"` is a format specifier that tells `scanf()` to expect an integer input.
   - `&age` is the address of the variable `age`. The `&` operator is used to pass the address of the variable to `scanf()`, so it knows where to store the input value.

5. **`printf("Your Age Is %d", age);`**: This line prints the value of `age` to the standard output (usually the screen). 
   - `printf()` is a function that prints formatted output.
   - `"Your Age Is %d"` is a format string where `%d` is a placeholder for an integer value.
   - `age` is the variable whose value will replace `%d` in the format string.

6. **`return 0;`**: This line indicates that the program has executed successfully. The `main()` function returns 0 to the operating system.

## `scanf()` and User Input in C

- **`scanf()` Function**: The `scanf()` function is used to read formatted input from the standard input. It requires a format string and a list of pointers to variables where the input values will be stored. The format string specifies the type of data expected (e.g., `%d` for integers, `%f` for floating-point numbers, `%s` for strings).

- **User Input**: When the program reaches the `scanf()` function, it waits for the user to input data. The user types the input and presses Enter. `scanf()` then reads the input, interprets it according to the format specifier, and stores the value in the provided variable.

## Example Execution

When you run the program, it will wait for the user to input an integer. For example:

```
Input: 25
Output: Your Age Is 25
```

Here's what happens step-by-step:
1. The program starts and declares the variable `age`.
2. It waits for the user to input an integer.
3. The user types `25` and presses Enter.
4. `scanf()` reads the input `25` and stores it in the variable `age`.
5. `printf()` prints the message "Your Age Is 25" to the screen.
6. The program ends and returns 0.
