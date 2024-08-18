#include <stdio.h> 

int main(){
    // <datatype> <variable>[n]
    // Value can be store upto n-1, because 0 is included (so, 0 to n-1)
    int store[4]; // Intilize a variable as Array
    store[0] = 10; // Element 1
    store[1] = 20; // Element 2
    store[2] = 30; // Element 3
    store[3] = 40; // Element 4
    printf("Store have %d, %d, %d, %d\n", store[0], store[1], store[2], store[3]); // value access

    int marks[5];
    for(int i = 0; i < 5; i++){
        printf("Enter number: ");
        scanf("%d", &marks[i]);
    }
    // printf("Marks have %d, %d, %d, %d, %d\n", marks[0], marks[1], marks[2], marks[3], marks[4]); 
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("Marks at %d index is %d\n", i, marks[i]);
    }

    // Other way to intilize Array
    int marks2[4] = {1, 2, 4, 6}; // All at a time

    // Display all marks with index
    for (int i = 0; i < 4; i++){
        printf("Marks at %d is %d\n", i, marks2[i]); 
    }
    
    int cgp[] = {1, 2, 3}; // the `n` is optinal, int cgp[n]
    for (int i = 0; i < 3; i++){
        printf("%d\n", cgp[i]);
    }
    return 0;
}