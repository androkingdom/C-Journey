#include <stdio.h> 
#include <math.h>

int main(){
    // Quick Quiz: Use the library function to calculate the area of a square with side a.
    float a;
    printf("Enter side of square: ");
    scanf("%f", &a);
    printf("Area of square of side %.1f Cm is %.1f Cm", a, pow(a,2));
    return 0;
}