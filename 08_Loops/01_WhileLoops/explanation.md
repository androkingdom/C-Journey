# The `while` Loop in C

## Overview

The `while` loop in C is used to execute a block of code repeatedly as long as a specified condition remains true. It is one of the fundamental looping constructs that helps in performing repetitive tasks.

## Code Example

```c
#include <stdio.h> 

int main(){
    int i = 0;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++; // => i = i + 1
    }
    
    return 0;
}
```

## Code Explanation

- **`int i = 0;`**: Declares and initializes an integer variable `i` with the value `0`.
- **`while (i <= 10)`**: Starts a `while` loop that will continue to execute as long as the condition `i <= 10` is true.
  - **`printf("%d\n", i);`**: Prints the current value of `i` followed by a newline.
  - **`i++;`**: Increments the value of `i` by `1` in each iteration. This is equivalent to `i = i + 1`.
- **`return 0;`**: Ends the `main` function and returns `0` to the operating system, indicating successful completion of the program.

## Output

When you run this program:

- The `while` loop starts with `i` initialized to `0`.
- It prints the value of `i` and then increments `i` by `1` in each iteration.
- The loop continues to execute until `i` exceeds `10`.

### Example Output:
```
0
1
2
3
4
5
6
7
8
9
10
```