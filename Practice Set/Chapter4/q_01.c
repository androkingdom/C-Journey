#include <stdio.h> 
// Write a program to print multiplication table of a given number n.
int main(){
    int n = 9;
    for (int i = 1; i <= 10; i++){
        printf("9 X %d = %d\n", i, n*i);
    }
    return 0;
}