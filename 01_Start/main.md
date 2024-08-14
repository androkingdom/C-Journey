# Hello World Program in C

## Overview

This program is a simple introduction to C programming. The goal is to print the message "Hello World!!" to the screen. This type of program is often the first one written when learning a new programming language.

## Code Explanation

```c
#include <stdio.h>

int main(){
    printf("Hello World!!");
    return 0;
}
```


1. **`#include <stdio.h>`**
   - This line includes the Standard Input Output library in C. The `stdio.h` header file contains functions for input and output, such as `printf`, which we use to print text to the console.

2. **`int main()`**
   - This is the main function, which is the entry point of every C program. When the program is executed, the code inside the `main` function is run.

3. **`printf("Hello World!!");`**
   - `printf` is a function from the `stdio.h` library used to output text to the console. The text inside the quotation marks ("Hello World!!") is what gets printed to the screen.

4. **`return 0;`**
   - The `return` statement ends the `main` function and returns the value `0` to the operating system. Returning `0` generally means that the program executed successfully.

## Output

When you run this program, it will display `Hello World!!`