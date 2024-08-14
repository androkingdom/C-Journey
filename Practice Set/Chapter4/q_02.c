#include <stdio.h> 
// Write a program to print multiplication table of 10 in reversed order.
int main(){
    for (int i = 10; i >= 1; i--){
        printf("10 X %d = %d\n", i, 10*i);
    }
    return 0;
}