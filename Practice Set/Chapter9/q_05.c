#include <stdio.h> 
// Write a program with a structure representing a complex number.
struct Complex{
    int real;
    int iota;
};
int main(){
    struct Complex e1 = {1, 10};
    printf("Complex number is = (%d + %d i)\n", e1.real, e1.iota);
    return 0;
}