#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Structure Used
typedef struct game{
    char snake[10];
    char water[10];
    char gun[10];
} game;

typedef struct choice{
    char choosed[10];
} choice;

// Functions Prototype
void Computer(choice *c1);
void UserInp(choice *u1);
int UserWin(char bot[], char user[]);
void LowerCase(char user[]);
int Compare(char a[], char b[]);

// Function Defined
// Converts the user input to lowercase for case-insensitive comparison
void LowerCase(char user[]){
    int i = 0;
    while (user[i] != '\0'){
        user[i] = tolower(user[i]);
        i++;
    }   
}

// Compares two strings; returns 1 if equal, 0 otherwise
int Compare(char a[], char b[]){
    return strcmp(a, b) == 0;
}

// Chooses a random option for the computer
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

// Takes the user's input
void UserInp(choice *u1){
    printf("Enter your choice (snake, water, gun): ");
    scanf("%s", u1->choosed);
}

// Determines the result of the game
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