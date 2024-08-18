#include <stdio.h> 
// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

int sum(int*, int*);
int avg(int*, int*);
int sum(int* n1, int* n2){
    printf("The sum of %d and %d is %d\n", *n1, *n2, *n1 + *n2);
}
int avg(int* n1, int* n2){
    printf("The avg of %d and %d is %.2f\n", *n1, *n2, (*n1+*n2)/2.0);
}
int main(){
    int n1 = 2;
    int n2 = 4;
    sum(&n1, &n2);
    avg(&n1, &n2);
    return 0;
}