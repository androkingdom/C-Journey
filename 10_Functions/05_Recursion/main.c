#include <stdio.h> 

int factorial(int);

int factorial(int a){
    // Factorial(n) = Factorial (n-1) x n
    int facto = 1;
    if (a == 1 || a == 0){
        return facto;        
    }
    else{
        facto = factorial(a-1) * a;
    }
}
int main(){
    int facto_of_0 = factorial(0);
    int facto_of_4 = factorial(4);
    int facto_of_6 = factorial(6);
    printf("factorial of 0 is %d\n", facto_of_0); 
    printf("factorial of 4 is %d\n", facto_of_4); 
    printf("factorial of 6 is %d\n", facto_of_6); 
    return 0;
}