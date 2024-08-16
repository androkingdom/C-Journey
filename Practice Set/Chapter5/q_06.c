#include <stdio.h> 
// Write a recursive function to calculate the sum of first ‘n’ natural numbers
// f(1) = 1 
// f(2) = 1 + 2
// f(3) = 1 + 2 + 3
// => f(3) = f(2) + 3
// => f(n) = f(n-1) + n


int sum(int);

int sum(int n){
    if (n == 1){
        return 1;
    }
    
    else{
        return sum(n-1) + n;
    }
}
int main(){
    int range = 4;
    printf("Sum upto %d is %d", range, sum(range)); 
    return 0;
}