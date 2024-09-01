#include <stdio.h> 
#include <stdlib.h>

int main(){
    // Use the array in problem q_01 to store 6 integers entered by the user.
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        printf("Enter integer: ");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}