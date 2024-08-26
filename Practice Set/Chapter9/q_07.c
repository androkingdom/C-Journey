#include <stdio.h> 
// Write problem q_05 structure using ‘typedef’ keywords.
typedef struct Complex{
    int real;
    int iota;
} Complex;
int main(){
    Complex e1 = {1, 10};
    printf("Complex number is = (%d + %d i)\n", e1.real, e1.iota);
    return 0;
}