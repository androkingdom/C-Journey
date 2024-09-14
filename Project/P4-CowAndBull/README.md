# Bull and Cow Game in C

## Table of Contents

- [Overview](#overview)
- [Code Explanation](#code-explanation)
  - [NewArray Structure](#newarray-structure)
  - [Checker Function](#checker-function)
  - [ArrayInit Function](#arrayinit-function)
  - [showArray Function](#showarray-function)
  - [user_array_init Function](#user_array_init-function)
  - [indexOf Function](#indexof-function)
  - [compareForBullCow Function](#compareforbullcow-function)
  - [startFunction Function](#startfunction-function)
  - [main Function](#main-function)
- [Output](#output)

## Overview

This project is a simple implementation of the "Bull and Cow" game in C. The game involves guessing a sequence of digits. The bot generates a sequence of unique random digits, and the player tries to guess it. The game provides feedback on how many digits are correctly guessed (cows) and how many digits are correct but in the wrong position (bulls). The game continues until the player guesses the correct sequence.

## Code Explanation

### NewArray Structure

```c
typedef struct NewArray {
    int* ptr;  // Pointer to the array
    int size;  // Size of the array
} NewArray;
```

- **Purpose**: Defines a structure to hold an integer array and its size.
- **Details**: `ptr` points to the dynamically allocated array, and `size` holds the number of elements in the array.

### Checker Function

```c
int Checker(NewArray* a, int digit) {
    for (int i = 0; i < a->size; i++) {
        if (digit == a->ptr[i]) {
            return 1; // Digit found
        }
    }
    return 0; // Digit not found
}
```

- **Purpose**: Checks if a given digit exists in the array.
- **Details**: Iterates through the array and returns `1` if the digit is found, otherwise returns `0`.

### ArrayInit Function

```c
int ArrayInit(NewArray* a, int size) {
    a->ptr = (int*) malloc(size * sizeof(int)); // Allocate memory for the array
    a->size = size;
    int i = 0;

    if (a->ptr == NULL) {
        fprintf(stderr, "Memory not allocated\n"); // Handle memory allocation failure
        return 1;
    }

    while (i < size) {
        int random_number = rand() % 9 + 1; // Generate random number between 1 and 9
        if (Checker(a, random_number) == 0) {
            a->ptr[i] = random_number; // Store unique random number
            i++;
        }
    }
    return 0;
}
```

- **Purpose**: Initializes an array with unique random numbers from 1 to 9.
- **Details**: Allocates memory for the array and fills it with unique random numbers. Uses `Checker` to ensure uniqueness.

### showArray Function

```c
void showArray(NewArray* a) {
    for (int i = 0; i < a->size; i++) {
        printf("%d", a->ptr[i]); // Print each element
    }
    printf("\n");
}
```

- **Purpose**: Displays the contents of the array.
- **Details**: Iterates through the array and prints each digit.

### user_array_init Function

```c
void user_array_init(NewArray* a, int size) {
    int number;
    if (a->ptr != NULL) {
        free(a->ptr); // Free previously allocated memory
    }
    a->ptr = (int*) malloc(size * sizeof(int)); // Allocate memory for the user array
    printf("Enter a %d-digit number: ", size);
    scanf("%d", &number);

    // Ensure the number has the correct number of digits
    if (number < 1000 || number > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return; // Allow the user to re-enter the number
    }

    a->size = size;
    for (int i = (size - 1); i >= 0; i--) {
        a->ptr[i] = number % 10; // Extract each digit
        number /= 10;
    }
}
```

- **Purpose**: Initializes the user input array from a 4-digit number.
- **Details**: Reads a 4-digit number from the user and converts it into an array of digits. Validates that the input is a 4-digit number.

### indexOf Function

```c
int indexOf(NewArray* a, int digit) {
    int i;
    for (i = 0; i < a->size && a->ptr[i] != digit; i++);
    return (i < a->size) ? i : -1; // Return index if found, otherwise -1
}
```

- **Purpose**: Finds the index of a digit in the array.
- **Details**: Iterates through the array and returns the index of the digit if found, otherwise returns `-1`.

### compareForBullCow Function

```c
void compareForBullCow(NewArray* user, NewArray* bot, int* cow, int* bull) {
    *cow = 0; // Initialize cows count
    *bull = 0; // Initialize bulls count

    for (int i = 0; i < user->size; i++) {
        if (Checker(bot, user->ptr[i])) { // Check if the digit is in the bot's array
            if (indexOf(bot, user->ptr[i]) == i) { // Check if the position is correct
                (*cow)++; // Increment cow count
            } else {
                (*bull)++; // Increment bull count
            }
        }
    }
}
```

- **Purpose**: Compares the user's guess with the bot's array and counts cows and bulls.
- **Details**: Checks each digit in the user's guess. Increments the cow count if the digit is in the correct position and the bull count if it is in the wrong position.

### startFunction Function

```c
void startFunction(NewArray* user, NewArray* bot, int* cow, int* bull, int* counter) {
    *counter = 0; // Initialize counter
    while (*cow < SIZE) { // Continue until the user guesses all digits correctly
        (*counter)++; // Increment attempt counter
        (*cow) = 0; // Reset cow count
        (*bull) = 0; // Reset bull count

        user_array_init(user, SIZE); // Get new guess from user
        compareForBullCow(user, bot, cow, bull); // Compare and update cows and bulls

        printf("Cows: %d, Bulls: %d\n", *cow, *bull); // Display results
    }

    printf("Time taken: %d attempts\n", *counter); // Display the total number of attempts
}
```

- **Purpose**: Manages the game flow, tracks attempts, and provides feedback.
- **Details**: Continuously prompts the user for guesses, compares them with the bot's array, and updates the counts of cows and bulls until the user guesses the correct sequence.

### main Function

```c
int main() {
    srand(time(NULL)); // Seed random number generator

    NewArray bot; // Array for bot's numbers
    NewArray user; // Array for user's numbers
    int cows = 0; // Count of cows
    int bulls = 0; // Count of bulls
    int counter = 0; // Number of attempts

    // Initialize bot array with unique random numbers
    if (ArrayInit(&bot, SIZE) != 0) {
        return 1; // Handle memory allocation failure
    }

    startFunction(&user, &bot, &cows, &bulls, &counter); // Start the game

    free(bot.ptr); // Free memory allocated for bot
    free(user.ptr); // Free memory allocated for user

    return 0;
}
```

- **Purpose**: Entry point of the program.
- **Details**: Seeds the random number generator, initializes the bot's array, starts the game, and handles memory deallocation.

## Output

The program prompts the user to enter a 4-digit number and then checks how many digits are correctly guessed (cows) and how many digits are correct but in the wrong position (bulls). The game continues until the user guesses all digits correctly, and the number of attempts is displayed.

- **Example Output**:
  ```
  Enter a 4-digit number: 1234
  Cows: 1, Bulls: 2
  Enter a 4-digit number: 1324
  Cows: 2, Bulls: 1
  Enter a 4-digit number: 1243
  Cows: 4, Bulls: 0
  Time taken: 3 attempts
  ```
