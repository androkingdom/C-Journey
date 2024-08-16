#include <stdio.h> 
// Write a program using function to print the following pattern (first n lines)
// *
// **
// ***
int main(){
    int n = 3;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}