#include <stdio.h> 
// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s^2
// F = m X g (g = 9.8m/s^2)

float GravitationalForce(float);
float GravitationalForce(float mass){
    return mass*9.8;
}
int main(){
    float Mass = 10;
    printf("Mass = %.2f Kg\n", Mass);
    printf("Gravitational Force = %.2f N\n", GravitationalForce(Mass)); 
    return 0;
}