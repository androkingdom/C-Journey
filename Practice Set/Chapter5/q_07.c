#include <stdio.h>
// Write a program using function to print the following pattern (first n lines)
// *
// ***
// *****
int star_pattern(int);
int star_pattern(int n){
    int star = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= star; j++){
            printf("*");
        }
        printf("\n");
        star += 2;
    }
}
int main(){
    star_pattern(3);
    return 0;
}