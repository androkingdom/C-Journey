#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4 // Define size for better flexibility

// Define a structure to hold an array and its size
typedef struct NewArray {
    int* ptr;  // Pointer to the array
    int size;  // Size of the array
} NewArray;

// Function prototypes
int Checker(NewArray* a, int digit);
int ArrayInit(NewArray* a, int size);
void showArray(NewArray* a);
void user_array_init(NewArray* a, int size);
int indexOf(NewArray* a, int digit);
void compareForBullCow(NewArray* user, NewArray* bot, int* cow, int* bull);
void startFunction(NewArray* user, NewArray* bot, int* cow, int* bull, int* counter);

// Check if a digit exists in the array
int Checker(NewArray* a, int digit) {
    for (int i = 0; i < a->size; i++) {
        if (digit == a->ptr[i]) {
            return 1; // Digit found
        }
    }
    return 0; // Digit not found
}

// Initialize an array with unique random numbers from 1 to 9
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

// Display the contents of the array
void showArray(NewArray* a) {
    for (int i = 0; i < a->size; i++) {
        printf("%d", a->ptr[i]); // Print each element
    }
    printf("\n");
}

// Initialize the user input array from a 4-digit number
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

// Find the index of a digit in the array
int indexOf(NewArray* a, int digit) {
    int i;
    for (i = 0; i < a->size && a->ptr[i] != digit; i++);
    return (i < a->size) ? i : -1; // Return index if found, otherwise -1
}

// Compare user input with bot's array and count cows and bulls
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

// Main function to drive the game and count attempts
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