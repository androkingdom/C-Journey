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