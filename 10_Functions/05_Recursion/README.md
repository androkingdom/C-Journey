# Recursion in C: Factorial Calculation

## Overview
This program demonstrates the concept of recursion by calculating the factorial of a given number. Recursion is a programming technique where a function calls itself to solve a problem by breaking it down into smaller, more manageable sub-problems.

## What is Recursion?
Recursion is a process in which a function calls itself directly or indirectly. The key components of recursion are:
- **Base Case:** The condition under which the recursive calls stop. This prevents infinite recursion.
- **Recursive Case:** The part of the function where the function calls itself with a modified argument, moving towards the base case.

In the context of this program, recursion is used to calculate the factorial of a number by reducing the problem step by step until the base case is reached.

## Concept of Factorial
The factorial of a non-negative integer \( n \) is denoted by \( n! \) and is defined as:
-  `0! = 1`
- `Factorial(n) = 1 x 2 x 3 … x n` ***---- 1***
- `Factorial(n-1) = 1 x 2 x3 … (n-1)` ***---- 2***
#### From above statment ***1*** and ***2***:
```
Factorial (n) = Factorial (n-1) x n
```

## Program Explanation

```c
#include <stdio.h> 

// Function Prototype
int factorial(int);

int factorial(int a){
    // Factorial(n) = Factorial(n-1) x n
    int facto = 1;
    if (a == 1 || a == 0){
        return facto;        
    }
    else{
        facto = factorial(a-1) * a;
    }
    return facto;
}

int main(){
    int facto_of_0 = factorial(0);
    int facto_of_4 = factorial(4);
    int facto_of_6 = factorial(6);
    printf("factorial of 0 is %d\n", facto_of_0); 
    printf("factorial of 4 is %d\n", facto_of_4); 
    printf("factorial of 6 is %d\n", facto_of_6); 
    return 0;
}
```

### Explanation
- **factorial(int a):** This is the recursive function that calculates the factorial. It checks if `a` is 0 or 1 (the base case) and returns `1`. Otherwise, it calls itself with the argument `a-1` and multiplies the result by `a`.
- **Base Case:** If `a` is 0 or 1, the function returns `1`.
- **Recursive Case:** If `a` is greater than 1, the function calls itself with `a-1` and multiplies the result by `a`.

## Output
When the program is executed, it will print the factorials of 0, 4, and 6 as follows:
```
factorial of 0 is 1
factorial of 4 is 24
factorial of 6 is 720
```

## Conclusion
This program illustrates how recursion can be effectively used to solve problems like calculating factorials. Understanding recursion is fundamental to mastering more complex programming concepts.