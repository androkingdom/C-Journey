#include <stdio.h> 

int main(){
    for(int i = 1; i <= 10; i++){ // Loop Started
        if (i == 5 || i == 1){ // making condition
            printf("Skipped the number\n");
            continue; // this keyword will skip this iteration
        }
        else{
            printf("%d\n", i); // if condition doesn't matched
        }
    }
    return 0;
}