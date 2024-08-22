#include <stdio.h> 

int main(){
    // Write a program to create an array of 10 integers and store multiplication table of 5 in it.
    int table[10];
    for(int i = 0; i < 10; i++){
        table[i] = 5*(i+1);
    }
    printf("Table Of 5\n");
    for(int i = 0; i < 10; i++){
        printf("5 X %d = %d\n", i+1, table[i]);
    }
    return 0;
}