#include <stdio.h> 

int main(){
    // If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
    // (i) True.
    // (ii) False.
    // (iii) Depends.
    // Answer - (ii)
    int S[3] = {1, 2, 4};
    printf("value at *(S+3) is %d", *(S+3)); // garbage value
    return 0;
}