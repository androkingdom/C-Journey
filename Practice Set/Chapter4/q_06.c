#include <stdio.h> 

int main(){
    // Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. 

    // for loop
    // int sum = 0;
    // for(int i = 1; i<= 10; i++){
    //     sum += i;
    // }
    // printf("Result: %d", sum);

    // do while loop
    int i = 1;
    int sum = 0;
    do {
        sum += i;
        i++;
    }while(i <= 10);
    printf("Result: %d", sum);

    return 0;
}