#include <stdio.h> 

int main(){
    char name[5];
    printf("Enter your name: ");
    gets(name); // gets() -> used to take user input accepting white spaces (instead of this use `fgets()`)
    printf("Your name: ");
    puts(name); // puts() -> used to display entered string on console with new line ("\n")
    printf("Hello!!");
    return 0;
}