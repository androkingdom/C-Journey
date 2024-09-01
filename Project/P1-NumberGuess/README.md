# Random Number Guessing Game

## Overview

This C program is a simple random number guessing game. The computer generates a random number between 0 and 100, and the user must guess the number. After each guess, the program provides feedback whether the guess was too high or too low, and keeps track of the number of attempts. The game continues until the user guesses the correct number.

## Source Code

```c
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
    // Random number generation
    srand(time(NULL)); // Seed the random number generator with the current time
    int RandomNumber = 0 + rand() % 101; // Generate a random number between 0 and 100
    int chances = 0; // Initialize chance counter
    int num; // Variable to store user input

    while(1){
        printf("Enter number: ");
        scanf("%d", &num); // Get user input
        
        if(num < RandomNumber){
            printf("Higher number Please\n"); // Prompt user to guess higher
            chances++;
        }
        else if(num > RandomNumber){
            printf("Lower number Please\n"); // Prompt user to guess lower
            chances++;
        }
        if(num == RandomNumber){
            printf("----------------\n");
            printf("You Win The Game !!\n"); // Congratulate the user for correct guess
            printf("Chance Taken: %d\n", chances); // Display the number of attempts
            break; // Exit the loop and end the game
        }
        printf("----------------\n");
    }
    return 0;
}
```

## Code Explanation

1. **Include Headers**:
   ```c
   #include <stdio.h> 
   #include <stdlib.h>
   #include <time.h>
   ```
   - `stdio.h` for input and output functions.
   - `stdlib.h` for the `rand()` and `srand()` functions.
   - `time.h` for the `time()` function to seed the random number generator.

2. **Seed the Random Number Generator**:
   ```c
   srand(time(NULL));
   ```
   - Seeds the random number generator with the current time to ensure different random numbers on each run.

3. **Generate a Random Number**:
   ```c
   int RandomNumber = 0 + rand() % 101;
   ```
   - Generates a random number between 0 and 100.

4. **Game Loop**:
   ```c
   while(1){
       printf("Enter number: ");
       scanf("%d", &num);
       if(num < RandomNumber){
           printf("Higher number Please\n");
           chances++;
       }
       else if(num > RandomNumber){
           printf("Lower number Please\n");
           chances++;
       }
       if(num == RandomNumber){
           printf("----------------\n");
           printf("You Win The Game !!\n");
           printf("Chance Taken: %d\n", chances);
           break;
       }
       printf("----------------\n");
   }
   ```
   - Prompts the user to guess a number.
   - Provides feedback whether the guess should be higher or lower.
   - Tracks the number of attempts.
   - Ends the loop when the user guesses the correct number and prints the number of attempts.

## Output

When you run this program:

- It will prompt you to enter a number.
- After each guess, it will tell you if you need to guess higher or lower.
- When you guess correctly, it will display "You Win The Game !!" and the number of attempts you took.

### Example Output:

```
Enter number: 50
Higher number Please
----------------
Enter number: 75
Lower number Please
----------------
Enter number: 60
You Win The Game !!
Chance Taken: 3
```