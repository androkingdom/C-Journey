#include <stdio.h> 
// Write a program to check whether a given character is present in a string or not.
int contain(char a[], char letter){
    int i = 0, count = 0;
    while (a[i] != '\0'){
        if (a[i] == letter){
            return 1;
        }
        i++;
    }
    return 0;
}
int main(){
    char myname[] = "Rishabh Madhwal";
    char c = 'R';
    printf("Is %c present in %s - ", c, myname);
    if (contain(myname, c)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }    
    return 0;
}