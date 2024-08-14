#include <stdio.h> 

int main(){
    // Write a program to check whether a given number is prime or not using loops.
    int check = 0;
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++){
        if(n%i==0){
            check = 1;
            break;
        }
    }
    if(check == 0){
        printf("%d is prime number", n);
    }
    else{
        printf("%d is not prime number", n);
    }
    return 0;
}