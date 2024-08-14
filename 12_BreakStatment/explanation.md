# Understanding the `break` Statement in C

## Overview
The `break` statement in C is used to terminate the execution of a loop or switch statement prematurely. When a `break` statement is encountered inside a loop, the loop is immediately terminated, and the control of the program moves to the statement immediately following the loop.

## Code Explanation
Below is a simple C program that demonstrates the use of the `break` statement within an infinite loop. The loop continues to prompt the user to enter a number until the user enters the number 18, at which point the loop is terminated using the `break` statement.

```c
#include <stdio.h> 

int main(){
    int n; // Declare integer variable
    while (1){ // Infinity Loop Started
        printf("------------\n");
        printf("Enter a number: ");
        scanf("%d", &n); // Taking user input
        printf("You entered %d\n", n);
        if (n == 18){ // making condition if user input is 18
            printf("Loop Stopped !!!\n");
            break; // this keyword will terminate the loop and stop it
        }
        else{
            printf("Guess right number to stop loop\n"); // if user input not equal 18 then loop will go on
        }
    }
    return 0;
}
```

1. **Variable Declaration**: An integer variable `n` is declared to store the user's input.
2. **Infinite Loop**: The `while (1)` statement creates an infinite loop that will continue to execute until it is explicitly terminated.
3. **User Input**: The program prompts the user to enter a number and reads the input using `scanf`.
4. **Condition Check**: The entered number is checked against the value 18.
    - If the number is 18, a message "Loop Stopped !!!" is printed, and the `break` statement is executed to terminate the loop.
    - If the number is not 18, a message "Guess right number to stop loop" is printed, and the loop continues.

## Output
The output of the program will vary based on the user's input. Below are a few examples:

### Example 1
```
------------
Enter a number: 5
You entered 5
Guess right number to stop loop
------------
Enter a number: 10
You entered 10
Guess right number to stop loop
------------
Enter a number: 18
You entered 18
Loop Stopped !!!
```

### Example 2
```
------------
Enter a number: 18
You entered 18
Loop Stopped !!!
```

## Brief Explanation
The `break` statement is a powerful control structure in C that allows for the immediate termination of loops and switch statements. In the provided code, the `break` statement is used to exit an infinite loop when the user enters the number 18. This demonstrates how `break` can be used to control the flow of a program based on user input or other conditions.
