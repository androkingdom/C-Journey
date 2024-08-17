#include <stdio.h> 

int main(){
    int a = 28;
    int* b = &a;  // Pointer 'b' pointing to the memory address of 'a'

    printf("Memory address of %d is %p\n", a, b); // Displaying the memory address of 'a'

    printf("Value at %p is %d and %d", b, *b, *(&a)); // Displaying the value at the memory address
    return 0;
}
