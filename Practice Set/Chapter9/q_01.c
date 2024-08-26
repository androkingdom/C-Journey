#include <stdio.h> 
// Create a two-dimensional vector using structures in C
typedef struct vector2d{
    int i;
    int j;
} vector;
int main(){
    vector v1 = {10, 10};
    printf("The value of vector is %di + %dj\n", v1.i, v1.j);
    return 0;
}