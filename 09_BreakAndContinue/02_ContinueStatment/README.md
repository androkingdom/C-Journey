# The `continue` Statement in C

## Overview

The `continue` statement is used in C programming to skip the remaining code in the current iteration of a loop and proceed to the next iteration. It is commonly used to bypass certain conditions within the loop and control the flow of execution.

## Code Explanation

```c
#include <stdio.h> 

int main(){
    for(int i = 1; i <= 10; i++){ // Loop Started
        if (i == 5 || i == 1){ // Making condition
            printf("Skipped the number\n");
            continue; // This keyword will skip this iteration
        }
        else{
            printf("%d\n", i); // If condition doesn't match
        }
    }
    return 0;
}
```

1. **`for(int i = 1; i <= 10; i++):`** Starts a for loop that iterates from `1 to 10`.

2. **`if (i == 5 || i == 1):`** Checks if the current value of `i` is either `5 or 1`. If `true`, the following code block is executed:
```c
printf("Skipped the number\n")
```
 Prints a message indicating that the number will be skipped.

3. **`continue:`** Skips the rest of the code in the current iteration and proceeds to the next iteration of the loop.

4. **`else`**: If the condition is `false`, this block is executed:
`printf("%d\n", i)` which prints the current value of `i` if it is **not** `5 or 1`.

## Output

When you run this program:

- It iterates from **1 to 10**.
- For `i` equal to **1 or 5**, it prints *`Skipped the number`* and `skips the iteration`.
- For all other values of `i`, it prints the current number.

### Example Output:

```plaintext
Skipped the number
2
3
4
Skipped the number
6
7
8
9
10
```
