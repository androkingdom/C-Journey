# Snake, Water, Gun Game in C (Old Version)

## Table of Contents

1. [Introduction](#introduction)
2. [Code Explanation](#code-explanation)
    - [Header Files](#header-files)
    - [Structure Definitions](#structure-definitions)
    - [Function Prototypes](#function-prototypes)
    - [Function Definitions](#function-definitions)
        - [LowerCase](#lowercase)
        - [Compare](#compare)
        - [Computer](#computer)
        - [UserInp](#userinp)
        - [UserWin](#userwin)
    - [Main Function](#main-function)
3. [How to Compile and Run](#how-to-compile-and-run)
4. [Pros and Cons](#pros-and-cons)
    - [Pros](#pros)
    - [Cons](#cons)
5. [Enhancements](#enhancements)
6. [Conclusion](#conclusion)

## Introduction

This document provides an explanation of the old version of a "Snake, Water, Gun" game implemented in C. The game is a variation of "Rock, Paper, Scissors" where the user plays against the computer.

## Code Explanation

### Header Files

```c
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
```

- `stdio.h`: Standard Input Output library for functions like `printf` and `scanf`.
- `time.h`: Library for time-related functions, used for seeding the random number generator.
- `stdlib.h`: Standard library for functions like `rand` and `srand`.
- `string.h`: Library for string manipulation functions like `strcpy`.
- `ctype.h`: Library for character handling functions like `tolower`.

### Structure Definitions

```c
typedef struct game{
    char snake[10];
    char water[10];
    char gun[10];
} game;

typedef struct choice{
    char choosed[10];
} choice;
```

- `game`: This structure is defined but not used. It includes character arrays for "snake", "water", and "gun".
- `choice`: This structure stores the choice made by the user or the computer in a character array `choosed`.

### Function Prototypes

```c
void Computer(choice *c1);
void UserInp(choice *u1);
int UserWin(char bot[], char user[]);
void LowerCase(char user[]);
int Compare(char a[], char b[]);
```

- `Computer(choice *c1)`: Generates a random choice for the computer.
- `UserInp(choice *u1)`: Takes user input.
- `UserWin(char bot[], char user[])`: Determines the result of the game.
- `LowerCase(char user[])`: Converts user input to lowercase for case-insensitive comparison.
- `Compare(char a[], char b[])`: Compares two strings and returns 1 if they are equal, 0 otherwise.

### Function Definitions

#### LowerCase

```c
void LowerCase(char user[]){
    int i = 0;
    while (user[i] != '\0'){
        user[i] = tolower(user[i]);
        i++;
    }   
}
```

- Converts all characters in the input string to lowercase for consistent case-insensitive comparison.

#### Compare

```c
int Compare(char a[], char b[]){
    return strcmp(a, b) == 0;
}
```

- Compares two strings. Returns `1` if the strings are identical, `0` otherwise.

#### Computer

```c
void Computer(choice *c1){
    srand(time(NULL));
    int randomNumber = rand() % 3;
    switch (randomNumber){
        case 0:
            strcpy(c1->choosed, "snake");
            break;
        case 1:
            strcpy(c1->choosed, "water");
            break;
        case 2:
            strcpy(c1->choosed, "gun");
            break;
    }
}
```

- Chooses a random option for the computer and stores it in the `choosed` field of the `choice` structure.

#### UserInp

```c
void UserInp(choice *u1){
    printf("Enter your choice (snake, water, gun): ");
    scanf("%s", u1->choosed);
}
```

- Prompts the user to enter their choice and stores it in the `choosed` field of the `choice` structure.

#### UserWin

```c
int UserWin(char bot[], char user[]){
    if (Compare(bot, user)){
        return -1; // Tie
    }
    else if (Compare(user, "snake") && Compare(bot, "water")){
        return 1; // User wins
    }
    else if (Compare(user, "water") && Compare(bot, "gun")){
        return 1; // User wins
    }
    else if (Compare(user, "gun") && Compare(bot, "snake")){
        return 1; // User wins
    }
    else {
        return 0; // User loses
    }
}
```

- Determines the result of the game based on the choices of the user and the computer.

### Main Function

```c
int main(){
    choice c1;  // Bot's choice
    choice u1;  // User's choice

    UserInp(&u1);         // Get user input
    Computer(&c1);        // Get bot input
    LowerCase(u1.choosed); // Convert user input to lowercase

    printf("User - %s\n", u1.choosed);
    printf("Bot - %s\n", c1.choosed);

    // Store the result of UserWin function
    int result = UserWin(c1.choosed, u1.choosed);
    
    if (result == 1){
        printf("You Won!\n");
    }
    else if(result == -1){
        printf("Tie!!!\n");
    }
    else{
        printf("You Lost!!\n");
    }
    
    return 0;
}
```

- The `main` function initializes the game by getting user and computer choices, converting the user input to lowercase, and determining the result of the game. It then prints the result based on the comparison.

## How to Compile and Run

1. Save the code to a file, e.g., `snake_water_gun_old.c`.
2. Open a terminal and navigate to the directory containing the file.
3. Compile the code using [gcc](https://gcc.gnu.org/):
   ```sh
   gcc -o snake_water_gun_old snake_water_gun_old.c
   ```
4. Run the compiled program:
   ```sh
   ./snake_water_gun_old
   ```

## Pros and Cons

### Pros
- Simple implementation that is easy to understand.
- Utilizes basic C constructs such as structures, arrays, and functions.
- Handles case insensitivity by converting user input to lowercase.

### Cons
- Hardcoded string comparisons for determining game outcomes make the code less scalable and harder to maintain.
- The game logic relies on string comparisons, which can be error-prone and less efficient.
- The random number generator is seeded every time `Computer()` is called, which may lead to less randomness in quick successive calls.
- No error handling for invalid user inputs or unexpected conditions.

## Enhancements

1. **Improve Random Number Generation**: Seed the random number generator only once in the `main` function to ensure varied results.
2. **Switch to Numeric Choices**: Refactor the game to use numeric choices rather than strings for better performance and scalability.
3. **Error Handling**: Add robust error handling to manage invalid user inputs more effectively.
4. **Refactor Code**: Simplify and refactor the code to improve readability and maintainability.

## Conclusion

This old version of the game demonstrates basic concepts in C but has several limitations, including the reliance on string comparisons for game logic. While it provides a functional game, the new version addresses many of these issues and offers a more scalable and maintainable solution. The enhancements suggested can further improve the code's efficiency and user experience.