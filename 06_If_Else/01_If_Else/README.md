# The `if` Statement and `if-else` Ladder in C

## Overview

The `if` statement in C is used for conditional execution of code blocks. It allows a program to make decisions based on certain conditions. The `if-else` ladder extends this by allowing multiple conditions to be checked in sequence.

## Code Example

```c
#include <stdio.h> 

int main(){
    int i = 10;
    if (i >= 18) {
        printf("You Are Allowed To Drive\n");
    }
    else {
        printf("You Are Not Allowed To Drive\n");
    }
    // Short-hand
    int a = 10;
    int result = (a <= 18) ? 1 : 0;
    printf("Result : %d", result);
    return 0;
}
```

## Code Explanation

- **`int i = 10;`**: Declares and initializes the integer variable `i` with the value `10`.
- **`if (i >= 18)`**: Checks if the value of `i` is greater than or equal to `18`. If true:
  - **`printf("You Are Allowed To Drive\n");`**: Prints a message indicating that the person is allowed to drive.
- **`else`**: Executes if the `if` condition is false:
  - **`printf("You Are Not Allowed To Drive\n");`**: Prints a message indicating that the person is not allowed to drive.
- **Short-hand Conditional Operator**:
  - **`int a = 10;`**: Declares and initializes the integer variable `a` with the value `10`.
  - **`int result = (a <= 18) ? 1 : 0;`**: Uses the conditional (ternary) operator to assign `1` to `result` if `a` is less than or equal to `18`, otherwise assigns `0`.
  - **`printf("Result : %d", result);`**: Prints the value of `result`.

## Output

When you run this program:

- It checks if the value of `i` (which is `10`) is greater than or equal to `18`. Since it is not, it prints "You Are Not Allowed To Drive".
- It then evaluates the condition `(a <= 18)` with `a` being `10`. Since `10` is less than or equal to `18`, it assigns `1` to `result` and prints "Result : 1".

### Example Output:
```
You Are Not Allowed To Drive
Result : 1
```