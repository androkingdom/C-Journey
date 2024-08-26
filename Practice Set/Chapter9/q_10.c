#include <stdio.h> 
#include <math.h>
// Solve problem q_09 for time using ‘typedef’ keyword.
typedef struct vector{
    int i;
    int j;
} vec;

int GreaterMag(vec v1, vec v2){
    float mag1 = sqrt(pow(v1.i, 2) + pow(v1.j,2));
    float mag2 = sqrt(pow(v2.i, 2) + pow(v2.j,2));
    if (mag1 > mag2){
        return 1; // return 1 for true
    }
    else if (mag1 < mag2){
        return -1; // return -1 for false
    }
    else{
        return 0; // return 0 for equal
    }
}
int main(){
    vec v1 = {10, 10};
    vec v2 = {20, 30};
    printf("Does v1 have greater magnitude than v2 = %d\n", GreaterMag(v1, v2));
    return 0;
}