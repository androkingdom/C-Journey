#include <stdio.h> 
// Write a function to change the value of a variable to ten times of its current value
void X10(int*);
void X10(int* ptr){
    *ptr = *ptr * 10;
}
int main(){
    int a = 20;
    X10(&a);
    printf("value of a is %d", a); 
    return 0;
}