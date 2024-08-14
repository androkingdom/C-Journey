#include <stdio.h> 

int main(){
    // Implement q_10 using other types of loops.

    // while loop

    // int check = 0;
    // int n;
    // int ranges = 2;
    // printf("Enter number: ");
    // scanf("%d", &n);

    // // Handle edge cases for numbers less than 2
    // if (n <= 1) {
    //     printf("%d is not prime\n", n);
    //     return 0;
    // }

    // while(ranges < n) {  // Continue while ranges is less than n
    //     if(n % ranges == 0) {  // If n is divisible by ranges
    //         check = 1;  // Set check to 1, indicating n is not prime
    //         break;  // Exit the loop as we found a divisor
    //     }
    //     ranges++;  // Increment ranges to check the next potential divisor
    // }

    // if (check == 0) {  // If check is still 0, n is a prime number
    //     printf("%d is prime\n", n);
    // } else {
    //     printf("%d is not prime\n", n);  // n is not a prime number
    // }

    // do-while

    int check = 0;
    int n;
    int ranges = 2;

    printf("Enter number: ");
    scanf("%d", &n);

    // Handle edge cases for numbers less than 2
    if (n <= 1) {
        printf("%d is not prime\n", n);
        return 0;
    }

    do {
        if (n % ranges == 0) {  // Check if n is divisible by ranges
            check = 1;  // Set check to 1, indicating n is not prime
            break;  // Exit the loop as we found a divisor
        }
        ranges++;  // Increment ranges to check the next potential divisor
    } while (ranges < n);  // Continue until ranges is less than n

    if (check == 0) {  // If check is still 0, n is a prime number
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);  // n is not a prime number
    }

    return 0;
}
