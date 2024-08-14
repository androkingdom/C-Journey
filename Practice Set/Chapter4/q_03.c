#include <stdio.h> 

int main(){
    //Q - A do while loop is executed:
    //     a. At least once.
    //     b. At least twice.
    //     c. At most once. 

    // Answer - a. At least once

    // Example
    int i = 1;
    do{
        printf("Hello World !!\n");
    }while( i < 0);

    return 0;
}