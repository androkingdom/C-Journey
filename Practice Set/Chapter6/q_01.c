#include <stdio.h> 

int main(){
    // Write a program to print the address of a variable. Use this address to get the value of the variable.
    int number = 29;
    int* adr_number = &number;
    printf("Variable = %d\n", *adr_number);
    printf("Addres = %p\n", adr_number);
    return 0;
}