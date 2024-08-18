#include <stdio.h> 
// Write a function and pass the value by reference
int sum(int*, int*);
int sum(int* num1, int* num2){
    return *num1 + *num2;
}
int main(){ 
    int number1 = 10;
    int number2 = 18;
    printf("Sum Of %d and %d is %d", number1, number2, sum(&number1, &number2));
    return 0;
}