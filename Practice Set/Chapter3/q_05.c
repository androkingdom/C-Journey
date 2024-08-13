#include <stdio.h> 
int main(){
    char Character;
    printf("Enter a letter: ");
    scanf("%c", &Character);
    printf("Ascii value Of %c is %d\n", Character, Character);
    if (Character >= 65 && Character <= 90){
        printf("Letter is NOT lower");
    }
    else if (Character >= 97 && Character <= 122){
        printf("Letter is lower");
    }
    else{
        printf("Entered value is NOT a letter!!");
    }

    return 0;
}