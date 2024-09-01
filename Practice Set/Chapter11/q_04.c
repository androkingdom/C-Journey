#include <stdio.h> 
#include <stdlib.h>

void printer(int* ptr, int len){
    for (int i = 0; i < len; i++){
        printf("%d\n", ptr[i]);
    }
}

int main(){
    // Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.
    int n = 5;
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        ptr[i] = (i+1)*12;
    }
    printf("Before realloc\n");
    printer(ptr, n);
    n *= 2;
    ptr = (int*) realloc(ptr, n * sizeof(int));
    for (int i = 5; i < n; i++){
        ptr[i] = (i+1)*12;
    }
    printf("After realloc\n");
    printer(ptr, n);
    free(ptr);
    return 0;
}