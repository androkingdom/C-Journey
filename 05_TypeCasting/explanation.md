# Type Casting in C

## Overview

In C programming, type casting is used to convert variables from one data type to another. This is important for ensuring that operations involving different types are handled correctly. Type casting can be either implicit or explicit.

## Code Example

```c
#include <stdio.h> 

// int and int → int
// int and float → float
// float and float → float

int main(){
    // Answer will be 4 not 4.5!
    float a = (9/2); 
    printf("%f\n", a);

    // For Getting 4.5 as Result
    float b = (9.0/2);
    printf("%f\n", b);

    float a2 = 12.3;
    int b2 = (int) a2;
    printf("hello %d", b2);

    return 0;
}
```

1. **`#include <stdio.h>`**: This line includes the standard input-output library in C, which is necessary for using functions like `printf()`.

2. **`float a = (9/2);`**: This line performs integer division.
   - `9/2` is an integer division because both operands are integers. The result is `4` (not `4.5`), as the fractional part is discarded.
   - This result (`4`) is then implicitly converted to a float and assigned to `a`. So, `a` becomes `4.0`.

3. **`printf("%f\n",a);`**: This line prints the value of `a` as a floating-point number. The output will be `4.000000`.

4. **`float b = (9.0/2);`**: This line performs floating-point division.
   - `9.0/2` involves a float (`9.0`) and an integer (`2`). The integer `2` is implicitly converted to a float (`2.0`), and the division is performed as floating-point division.
   - The result is `4.5`, which is assigned to `b`.

5. **`printf("%f\n",b);`**: This line prints the value of `b` as a floating-point number. The output will be `4.500000`.

6. **`float a2 = 12.3;`**: This line declares a float variable `a2` and initializes it with the value `12.3`.

7. **`int b2 = (int) a2;`**: This line performs explicit type casting.
   - `(int) a2` explicitly converts the float `a2` to an integer. The fractional part is discarded, so `12.3` becomes `12`.
   - The result (`12`) is assigned to `b2`.

8. **`printf("hello %d",b2);`**: This line prints the value of `b2` as an integer. The output will be `hello 12`.

9. **`return 0;`**: This line indicates that the program has executed successfully. The `main()` function returns 0 to the operating system.

## Type Casting in C

**Implicit Type Casting (Automatic Type Conversion)**:
- The compiler automatically converts one data type to another.
- This happens when different data types are used in an expression.
- For example, in `float b = (9.0/2);`, the integer `2` is implicitly converted to a float `2.0` to perform floating-point division.

**Explicit Type Casting (Manual Type Conversion)**:
- The programmer explicitly converts one data type to another using the cast operator `(type)`.
- This is done to ensure that the conversion happens as intended.
- For example, in `int b2 = (int) a2;`, the float `a2` is explicitly converted to an integer, discarding the fractional part.

## Summary

- **Implicit Type Casting**: Automatic conversion by the compiler.
  - Example: `float b = (9.0/2);` (integer `2` is converted to float `2.0`).
- **Explicit Type Casting**: Manual conversion by the programmer.
  - Example: `int b2 = (int) a2;` (float `a2` is converted to integer `b2`).
