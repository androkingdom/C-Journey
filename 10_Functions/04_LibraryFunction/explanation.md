# Calculating the Area of a Square Using the `pow` Function

## Overview

This program calculates the area of a square using the `pow` function from the `math.h` library in C. The program prompts the user to input the side length of the square and then computes the area by raising the side length to the power of 2.

## Code Explanation

```c
#include <stdio.h>
#include <math.h>

int main(){
    // Quick Quiz: Use the library function to calculate the area of a square with side a.
    float a;
    printf("Enter side of square: ");
    scanf("%f", &a);
    printf("Area of square of side %.1f Cm is %.1f Cm", a, pow(a,2));
    return 0;
}
```

### Code Breakdown

1. **Include Libraries**:
    - `#include <stdio.h>`: This library is used for standard input and output operations, such as `printf` and `scanf`.
    - `#include <math.h>`: This library provides mathematical functions, including the `pow` function, which is used to calculate the power of a number.

2. **Main Function**:
    - The program starts by declaring a `float` variable `a` to store the side length of the square.
    - `printf("Enter side of square: ");`: This line prompts the user to enter the side length of the square.
    - `scanf("%f", &a);`: This line reads the user's input and stores it in the variable `a`.
    - `printf("Area of square of side %.1f Cm is %.1f Cm", a, pow(a,2));`: This line calculates the area of the square using the `pow` function and prints the result. The `pow(a, 2)` function computes `a` raised to the power of 2.
    - The `%.1f` format specifier is used to print the side and the area with one decimal place.

3. **Return Statement**:
    - `return 0;`: This line indicates that the program has successfully executed and will return 0 to the operating system.

## Output

When you run this program, it will:

1. Prompt you to enter the side length of the square.
2. Display the area of the square.

### Example Output

```
Enter side of square: 5
Area of square of side 5.0 Cm is 25.0 Cm
```