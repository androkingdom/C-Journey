#include <stdio.h> 

int main(){
    // Repeat q_08 using while loop. 
    int n;
    int factorial = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    int number = n;
    while (n >= 1)  
    {
        factorial *= n;
        n--;
    }
    
    printf("Factorial of %d is %d", number, factorial);
    return 0;
}