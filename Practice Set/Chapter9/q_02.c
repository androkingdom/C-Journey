#include <stdio.h> 
// Write a function ‘sumVector’ which returns the sum of two vectors passed to it. The vectors must be two–dimensional.
struct vector{
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector v3 = {(v1.i + v2.i), (v1.j + v2.j)};
    return v3;
}

int main(){
    struct vector v1 = {10, 10};
    struct vector v2 = {20, 30};
    struct vector resultant = sumVector(v1, v2);
    printf("Sum of vector v1 and v2 is (%d,%d)\n",resultant.i, resultant.j);
    return 0;
}