# For Loop in C

## Overview

The `for` loop in C is used to execute a block of code a specific number of times. It is a control flow statement that allows code to be executed repeatedly based on a condition. The `for` loop is particularly useful when the number of iterations is known **beforehand**.

## Code Explanation

```c
#include <stdio.h> 

int main(){
    // Printing numbers from 0 to 9
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    // Reverse Order Program
    for (int n = 8; n >= 0; n--)
    {
        printf("%d\n", n);
    }
    return 0;
}
```

### First `for` Loop

```c
for (int i = 0; i < 10; i++)
{
    printf("%d\n", i);
}
```

- **`int i = 0;`**: Initializes the loop control variable `i` to `0`. This is the starting point of the loop.
- **`i < 10;`**: The loop continues to execute as long as `i` is less than `10`. This is the loop's condition.
- **`i++`**: Increments `i` by `1` after each iteration of the loop.
- **`printf("%d\n", i);`**: Prints the current value of `i` followed by a newline.

**Explanation**: This loop starts with `i` at `0` and increments it by `1` in each iteration. It will print numbers from `0` to `9`, each on a new line. The loop terminates once `i` reaches `10`, which no longer satisfies the condition `i < 10`.

### Second `for` Loop

```c
for (int n = 8; n >= 0; n--)
{
    printf("%d\n", n);
}
```

- **`int n = 8;`**: Initializes the loop control variable `n` to `8`. This is the starting point of the loop.
- **`n >= 0;`**: The loop continues to execute as long as `n` is greater than or equal to `0`. This is the loop's condition.
- **`n--`**: Decrements `n` by `1` after each iteration of the loop.
- **`printf("%d\n", n);`**: Prints the current value of `n` followed by a newline.

**Explanation**: This loop starts with `n` at `8` and decrements it by `1` in each iteration. It will print numbers from `8` down to `0`, each on a new line. The loop terminates once `n` is less than `0`, which no longer satisfies the condition `n >= 0`.

## Output

When you run this program:

1. The first `for` loop prints numbers from `0` to `9`.
2. The second `for` loop prints numbers from `8` down to `0`.

**Example Output:**
-
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
8
7
6
5
4
3
2
1
0
```