#include <stdio.h> 

int main(){
    // Write a program to take string as an input from the user using %c and %s confirm that the strings are equal
    char word[5];
    printf("Enter character:\n");
    // scanf("%s", word); // using `%s`
    // for `%c` we will use loop
    for (int i = 0; i < 3; i++){
        scanf("%c", &word[i]);
        fflush(stdin);
    }
    word[4] = '\0';
    printf("%s", word);
    return 0;
}