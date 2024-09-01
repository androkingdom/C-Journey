#include <stdio.h> 
#include <stdlib.h>

int main(){
    // Write a program to dynamically create an array of size 6 capable of storing 6 integers.
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        ptr[i] = (i+1)*2;
    }
    for (int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}