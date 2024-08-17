#include <stdio.h> 

int main(){
    // What will the following line produce in a C program:
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // Answer - 4 5 5 for compiler evaluate left to right!!

    // Answer - 6 6 4 for compiler evaluate right to left !! (in general)

    return 0;
}