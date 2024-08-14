#include <stdio.h> 

int main(){
    // Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10). 
    int sum = 0;
    for (int i = 1; i <= 10; i++){
        sum += 8*i;
    }
    printf("Result of sum Of multiples of 8 upto 10 is %d", sum);
    return 0;
}