# Snake, Water, Gun Game in C (2.0 Version)

## Table of Contents
1. [Code Explanation](#code-explanation)
    - [Header Files](#header-files)
    - [Structure Definition](#structure-definition)
    - [Function Prototypes](#function-prototypes)
    - [Function Definitions](#function-definitions)
        - [ComputerOut](#computerout)
        - [UserWin](#userwin)
        - [Modifier](#modifier)
    - [Main Function](#main-function)
2. [How to Compile and Run](#how-to-compile-and-run)
3. [Pros and Cons](#pros-and-cons)
4. [Enhancements](#enhancements)
5. [Conclusion](#conclusion)

## Code Explanation

### Header Files

```c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
```

- `stdio.h`: Standard Input Output library for functions like `printf` and `scanf`.
- `time.h`: Library for time-related functions, used here to seed the random number generator.
- `stdlib.h`: Standard library for functions like `rand` and `srand`.
- `string.h`: Library for string manipulation functions like `strcpy`.

### Structure Definition

```c
typedef struct moded {
    char modul[10];
} mod;
```

- A structure `moded` is defined with a single member `modul` which is a character array of size 10. This structure is used to map numeric choices to their string equivalents.

### Function Prototypes

```c
int ComputerOut();
void modifier(char modedstr[], int number);
int UserWin(int bot, int user);
```

- `ComputerOut()`: Generates a random choice for the computer.
- `modifier(char modedstr[], int number)`: Maps numeric choices to their string equivalents.
- `UserWin(int bot, int user)`: Determines the result of the game.

### Function Definitions

#### ComputerOut

```c
int ComputerOut() {
    return rand() % 3 + 1; // Generate a number between 1 and 3
}
```

- Generates a random number between 1 and 3, representing the computer's choice.

#### UserWin

```c
int UserWin(int bot, int user) {
    int result[3][3] = {
        {-1, 0, 1},
        {1, -1, 0},
        {0, 1, -1}
    };
    return result[bot - 1][user - 1];
}
```

- Uses a 2D array to determine the result of the game.
  - `-1`: Tie
  - `0`: User loses
  - `1`: User wins

#### Modifier

```c
void modifier(char modedstr[], int number) {
    mod m[3] = {{"Snake"}, {"Water"}, {"Gun"}};
    if (number >= 1 && number <= 3) {
        strcpy(modedstr, m[number - 1].modul);
    } else {
        strcpy(modedstr, "Invalid");
    }
}
```

- Maps numeric choices (1, 2, 3) to their string equivalents ("Snake", "Water", "Gun").

### Main Function

```c
int main() {
    srand(time(NULL)); // Seed the random number generator

    int userinp;
    printf("Enter your choice (1 for snake, 2 for water, 3 for gun): ");
    scanf("%d", &userinp); // Get user input
    
    // Input validation
    if (userinp < 1 || userinp > 3) {
        printf("Invalid choice. Please enter a number between 1 and 3.\n");
        return 1; // Exit with error code
    }

    int bot = ComputerOut(); // Get bot input

    // Convert numeric choices to strings
    char userChoice[10];
    char botChoice[10];
    modifier(userChoice, userinp);
    modifier(botChoice, bot);

    printf("User - %s\n", userChoice);
    printf("Bot - %s\n", botChoice);

    // Store the result of UserWin function
    int result = UserWin(bot, userinp);
    
    if (result == 1) {
        printf("You Won!\n");
    }
    else if (result == -1) {
        printf("Tie!!!\n");
    }
    else {
        printf("You Lost!!\n");
    }
    
    return 0;
}
```

- Seeds the random number generator using the current time.
- Prompts the user to enter a choice (1 for Snake, 2 for Water, 3 for Gun).
- Validates the user input.
- Generates a random choice for the computer.
- Converts numeric choices to their string equivalents.
- Prints the choices of both the user and the computer.
- Determines the result of the game and prints whether the user won, lost, or tied.

## How to Compile and Run

1. Save the code to a file, e.g., `snake_water_gun.c`.
2. Open a terminal and navigate to the directory containing the file.
3. Compile the code using [gcc](https://gcc.gnu.org/):
   ```sh
   gcc -o snake_water_gun snake_water_gun.c
   ```
4. Run the compiled program:
   ```sh
   ./snake_water_gun
   ```

## Pros and Cons

### Pros of Version 2.0

- **Improved User Interface**: Numeric choices are mapped to their string equivalents, making the output more user-friendly.
- **Input Validation**: Checks if user input is within the valid range (1 to 3).
- **Clearer Code**: The code is more modular and readable with separated functions for different tasks.

### Cons of Version 2.0

- **Hardcoded Values**: The mapping of choices (1 to 3) is hardcoded, which might be less flexible for changes or extensions to the game.

## Enhancements

2. **Flexible Choice Mapping**: Consider using enums or configurations for more flexible choice mapping.
3. **Error Handling**: Improve error handling in the `modifier` function to manage unexpected input more gracefully.

## Conclusion

This updated version of the "Snake, Water, Gun" game introduces better user interaction and code clarity. It demonstrates basic programming concepts such as structure usage, random number generation, and string manipulation. The enhancements make the code more user-friendly and maintainable.
