#include <stdio.h>
// Write a program using function to print the following pattern (first n lines)
// *
// ***
// *****
int star_pattern(int);
int star_pattern(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= ((2*i)-1); j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    star_pattern(3);
    return 0;
}