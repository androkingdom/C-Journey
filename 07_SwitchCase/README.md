# The `switch` Statement in C

## Overview

The `switch` statement in C is used to execute one block of code among many based on the value of a variable. It provides a way to perform different actions based on different conditions, making it an alternative to multiple `if-else` statements.

## Code Example

```c
#include <stdio.h> 

int main(){
    int age;
    printf("Enter Age : "); 
    scanf("%d", &age);
    switch (age)
    {
    case 18:
        printf("You Are __");
        break;

    case 60:
        printf("You Are __");
        break;

    case 90:
        printf("You Are __");
        break;
    
    default:
        printf("You Are %d", age);
        break;
    }
    return 0;
}
```

## Code Explanation

- **`int age;`**: Declares an integer variable `age` to store the user's input.
- **`printf("Enter Age : ");`**: Prompts the user to enter their age.
- **`scanf("%d", &age);`**: Reads the user's input and stores it in the variable `age`.
- **`switch (age)`**: Starts a `switch` statement that evaluates the value of `age`.
  - **`case 18:`**: Checks if `age` is `18`. If true:
    - **`printf("You Are __");`**: Prints a message for the case when age is `18`.
    - **`break;`**: Exits the `switch` statement and prevents fall-through to other cases.
  - **`case 60:`**: Checks if `age` is `60`. If true:
    - **`printf("You Are __");`**: Prints a message for the case when age is `60`.
    - **`break;`**: Exits the `switch` statement.
  - **`case 90:`**: Checks if `age` is `90`. If true:
    - **`printf("You Are __");`**: Prints a message for the case when age is `90`.
    - **`break;`**: Exits the `switch` statement.
  - **`default:`**: Executes if `age` does not match any of the specified cases.
    - **`printf("You Are %d", age);`**: Prints the age entered by the user.
    - **`break;`**: Exits the `switch` statement.

## Output

When you run this program:

- It will prompt you to enter your age.
- Depending on the value entered:
  - If the age is `18`, `60`, or `90`, it will print a specific message (e.g., "You Are __").
  - For any other age, it will print "You Are" followed by the age entered.

### Example Output:

If the user enters `25`:
```
Enter Age : 25
You Are 25
```

If the user enters `60`:
```
Enter Age : 60
You Are __
```