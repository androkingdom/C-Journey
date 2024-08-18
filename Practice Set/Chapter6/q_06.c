#include <stdio.h> 
// Write a program to print the value of a variable i by using “pointer to pointer” type of variable.
int main(){
    int i = 10;
    int* j = &i;
    int** k = &j;
    printf("value of i is %d", **k); 
    return 0;
}