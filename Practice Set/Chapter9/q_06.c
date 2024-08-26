#include <stdio.h> 
// Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user.
typedef struct Complex{
    int real;
    int iota;
} Complex;

void displayComplex(struct Complex e[], int len){
    for (int i = 0; i < len; i++){
        printf("Complex Equation %d\n", i+1);
        printf("%d + %di\n", e[i].real, e[i].iota);
    }
}
int main(){
    Complex Equations[5];
    for (int i = 0; i < 5; i++){
        printf("Complex Equation %d\n", i+1);
        printf("Enter real part: ");
        scanf("%d", &Equations[i].real);
        printf("Enter imaginary part: ");
        scanf("%d", &Equations[i].iota);
    }

    displayComplex(Equations, 5);
    return 0;
}