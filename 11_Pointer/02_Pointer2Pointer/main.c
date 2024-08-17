#include <stdio.h> 

int main(){
    int i = 10;            // A normal integer variable
    int* j = &i;           // Pointer 'j' pointing to the address of 'i'

    int** k = &j;          // Pointer 'k' pointing to the address of pointer 'j'

    printf("Value of i is %d\n", i);        // Direct access to 'i'
    printf("Value of i using *j is %d\n", *j);  // Access 'i' using pointer 'j'
    printf("Value of i using **(&j) is %d\n", **(&j));  // Access 'i' using pointer to pointer 'k'
    printf("Value of i using **k is %d\n", **k);   // Access 'i' using pointer to pointer 'k'
    
    return 0;
}
