#include <stdio.h> 
// Function Prototype
int multi(int, int);
// Function Defination
int multi(int a, int b){
    printf("multiply of %d and %d is %d\n", a, b, a*b);
}
// Another Function Prototype
int add(int, int);
// This Function Defination
int add(int x, int y){
    return x+y;
}

int main(){
    multi(2, 5); // Calling Function "multi"
    int sum_of_1_and_2 = add(1, 2);
    printf("sum of 1 and 2 is %d", sum_of_1_and_2);
    return 0;
}