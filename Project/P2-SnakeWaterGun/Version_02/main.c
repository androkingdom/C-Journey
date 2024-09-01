#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <string.h>

// Structure Used
typedef struct moded {
    char modul[10];
} mod;

// Functions Prototype
int ComputerOut();
void modifier(char modedstr[], int number);
int UserWin(int bot, int user);

// Chooses a random option for the computer
int ComputerOut() {
    return rand() % 3 + 1; // Generate a number between 1 and 3
}

// Determines the result of the game 2.0 version
int UserWin(int bot, int user) {
    int result[3][3] = {
        {-1, 0, 1},
        {1, -1, 0},
        {0, 1, -1}
    };
    return result[bot - 1][user - 1];
}

// Maps numeric choice to string
void modifier(char modedstr[], int number) {
    mod m[3] = {{"Snake"}, {"Water"}, {"Gun"}};
    if (number >= 1 && number <= 3) {
        strcpy(modedstr, m[number - 1].modul);
    } else {
        strcpy(modedstr, "Invalid");
    }
}

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