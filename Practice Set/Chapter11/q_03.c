#include <stdio.h> 
#include <stdlib.h>

int main(){
    // Solve problem q_01 using calloc().
    int n = 6;
    int *ptr;
    ptr = (int*) calloc(6, sizeof(int));
    for (int i = 0; i < n; i++){
        ptr[i] = (i+1)*2;
    }
    for (int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}