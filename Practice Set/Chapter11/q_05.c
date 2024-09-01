#include <stdio.h> 
#include <stdlib.h>

void printer(int* ptr, int len){
    for (int i = 0; i < len; i++){
        printf("%d X %d = %d\n", 7, i+1, ptr[i]);
    }
}

int main(){
    // Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).
     int n = 10;
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++){
        ptr[i] = (i+1)*7;
    }
    printf("Before realloc\n");
    printer(ptr, n);
    n += 5;
    ptr = (int*) calloc(n , sizeof(int));
    for (int i = 5; i < n; i++){
        ptr[i] = (i+1)*7;
    }
    printf("After realloc\n");
    printer(ptr, n);
    free(ptr);

    return 0;
}