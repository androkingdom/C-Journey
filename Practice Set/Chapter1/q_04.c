#include <stdio.h> 

int main(){
    float p, r, t, SI;
    p = 34.1;
    r = 8;
    t = 5;

    SI = (p * r * t)/100;
    printf("Simple Intrest of %f in %f year on the rate of %f is %f", p, t, r, SI); 
    return 0;
}