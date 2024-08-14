#include <stdio.h> 

int main(){
    // Write a program to calculate the factorial of a given number using a for loop

    int n;
    int factorial = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("Factorial of %d is %d", n, factorial);
    return 0;
}