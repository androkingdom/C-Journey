#include <stdio.h> 
#include <math.h>
// Write a structure capable of storing date. Write a function to compare those dates
struct vector{
    int i;
    int j;
};

int GreaterMag(struct vector v1, struct vector v2){
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
    struct vector v1 = {10, 10};
    struct vector v2 = {20, 30};
    printf("Does v1 have greater magnitude than v2 = %d\n", GreaterMag(v1, v2));
    return 0;
}