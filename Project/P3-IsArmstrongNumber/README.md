# Armstrong Number Checker in C

## Table of Contents

- [Overview](#overview)
- [Code Explanation](#code-explanation)
  - [NumberLen Function](#numberlen-function)
  - [isArmstrong Function](#isarmstrong-function)
  - [main Function](#main-function)
- [Output](#output)

## Overview

This project is a C program that determines if a given number is an Armstrong number. An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. For example, 1634 is an Armstrong number because \( 1^4 + 6^4 + 3^4 + 4^4 = 1634 \).

## Code Explanation

### NumberLen Function

```c
int NumberLen(int n) {
    int count = 0;
    // Count the number of digits in the number n
    while (n != 0) {
        n /= 10;      // Remove the last digit of n
        count++;      // Increment the count
    }
    return count;    // Return the total count of digits
}
```

- **Purpose**: This function calculates the number of digits in the given integer `n`.
- **How It Works**: 
  - The loop repeatedly divides `n` by 10, effectively removing the last digit each time.
  - Each time a digit is removed, the `count` is incremented.
  - The process continues until `n` becomes 0, indicating that all digits have been processed.
  - The function then returns the total count of digits.

### isArmstrong Function

```c
int isArmstrong(int number) {
    int sum = 0;
    int n = number;  // Copy of the original number
    int number_of_digit = NumberLen(number);  // Get the number of digits in the number

    // Calculate the sum of each digit raised to the power of the number of digits
    while (n != 0) {
        int digit = n % 10;                // Extract the last digit of n
        sum += pow(digit, number_of_digit); // Add the digit raised to the power to sum
        n /= 10;                           // Remove the last digit of n
    }
    
    // Compare the sum with the original number
    return (sum == number);
}
```

- **Purpose**: This function checks if the given number is an Armstrong number.
- **How It Works**:
  - `int digit = n % 10;` extracts the last digit of `n`.
  - `sum += pow(digit, number_of_digit);` adds the last digit raised to the power of the number of digits to the sum.
  - `n /= 10;` removes the last digit from `n` by dividing it by 10.
  - The loop continues until all digits have been processed.
  - Finally, the function checks if the calculated sum is equal to the original number and returns the result.

### main Function

```c
int main() {
    int number;
    printf("Enter number to check if number is armstrong or not\n");
    printf("Enter number: ");
    scanf("%d", &number);  // Read the number from the user

    int result = isArmstrong(number);  // Check if the number is an Armstrong number
    if (result) {
        printf("Number is armstrong\n");  // Output if the number is an Armstrong number
    } else {
        printf("Number is not armstrong\n");  // Output if the number is not an Armstrong number
    }
    return 0;
}
```

- **Purpose**: This is the entry point of the program.
- **How It Works**:
  - Prompts the user to enter a number.
  - Reads the number using `scanf`.
  - Calls `isArmstrong` to check if the number is an Armstrong number.
  - Outputs whether the number is an Armstrong number based on the result.

## Output

The program prompts the user to enter a number and then checks if that number is an Armstrong number. The result is displayed as follows:

- If the number is an Armstrong number, the output will be: `Number is armstrong`
- If the number is not an Armstrong number, the output will be: `Number is not armstrong`