#include <stdio.h> 
// Write a program to count the occurrence of a given character in a string
int count(char a[], char letter){
    int i = 0, count = 0;
    while (a[i] != '\0'){
        if (a[i] == letter){
            count++;
        }
        i++;
    }
    return count;
}
int main(){
    char myname[] = "Rishabh Madhwal";
    printf("Number of a in %s is/are %d\n", myname, count(myname, 'R'));
    return 0;
}