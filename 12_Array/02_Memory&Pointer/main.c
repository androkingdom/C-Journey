#include <stdio.h> 

int main(){
    int arr[3] = {1, 2, 3}; // 1 integer = 4 bytes
    // This will reserve 4 x 3 = 12 bytes in memory (4 bytes for each integer) 

    // POINTER ARITHMETIC
    int a = 10;
    int* pointer = &a;
    printf("Value of pointer is %u\n", pointer);
    pointer++;
    printf("Value of pointer is %u\n", pointer);
    return 0;
}