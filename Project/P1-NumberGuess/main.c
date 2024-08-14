#include <stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(){
    // Random number generation
    srand(time(NULL));
    int RandomNumber = 0+rand()%(101);
    int chances = 0;
    int num;

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
    return 0;
}