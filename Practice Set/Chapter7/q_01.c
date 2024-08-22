#include <stdio.h> 

int main(){
    // Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

    int arra1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* ptr_arra1 = arra1;
    int indx = 0;
    printf("%d is at %u\n", *ptr_arra1, ptr_arra1);
    ptr_arra1 += 2;
    indx += 2;
    printf("%d is at %u\n", *ptr_arra1, ptr_arra1);
    return 0;
}