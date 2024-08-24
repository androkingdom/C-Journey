# Understanding C String Functions

## Overview

This example demonstrates the usage of fundamental string handling functions provided by the `<string.h>` library in C. The functions covered include `strlen` for calculating string length, `strcpy` for copying strings, `strcat` for concatenating strings, and `strcmp` for comparing strings. This code highlights how these functions work with string manipulation, offering a practical guide for handling strings in C programming.

## Code Example

```c
#include <stdio.h> 
#include <string.h> // Required for string handling functions

int main(){

    // 1. Calculate String Length
    // strlen(<string_name>) -> Returns the number of characters in the string excluding the null character ('\0').
    char st[] = "Sam"; // Initializing a string
    printf("Length of string is %d\n", strlen(st)); 

    // 2. Copy Strings
    // strcpy(<target>, <source>) -> Copies the source string to the target string.
    char CopyCat[15]; // Empty string to hold the copied content
    strcpy(CopyCat, st); 
    printf("st contains - %s, CopyCat contains - %s\n", st, CopyCat);

    // 3. Concatenate Strings
    // strcat(<string_1>, <string_2>) -> Concatenates the two strings and stores the result in string_1.
    char st1[15] = "Hello"; // First string
    char st2[15] = "World"; // Second string
    strcat(st1, st2); // Concatenated string is stored in st1
    printf("%s\n", st1);

    // 4. Compare Strings
    // strcmp(<string_1>, <string_2>) -> Compares two strings lexicographically.
    char string1[] = "Hello";
    char string2[] = "World";
    int result = strcmp(string1, string2); // Returns a negative value if string1 < string2
    int result2 = strcmp(string2, string1); // Returns a positive value if string1 > string2
    printf("Result of 1st comparison = %d\n", result);
    printf("Result of 2nd comparison = %d\n", result2);
    
    return 0;
}
```

## Code Explanation

1. **Include Standard Libraries**:
   - The program starts by including the `<stdio.h>` for standard input/output functions and `<string.h>` for string handling functions.

2. **Calculating String Length with `strlen`**:
   - The `strlen` function is used to calculate the number of characters in the string `st`, excluding the null character (`'\0'`). 
   - Example:
     ```c
     char st[] = "Sam";
     printf("Length of string is %d\n", strlen(st)); 
     ```
   - **Output**: `Length of string is 3`
   - **Explanation**: The string `"Sam"` consists of three characters (`S`, `a`, `m`), so `strlen(st)` returns 3.

3. **Copying Strings with `strcpy`**:
   - The `strcpy` function copies the contents of the source string `st` to the target string `CopyCat`.
   - Example:
     ```c
     char CopyCat[15];
     strcpy(CopyCat, st); 
     printf("st contains - %s, CopyCat contains - %s\n", st, CopyCat);
     ```
   - **Output**: `st contains - Sam, CopyCat contains - Sam`
   - **Explanation**: After execution, both `st` and `CopyCat` contain the string `"Sam"`.

4. **Concatenating Strings with `strcat`**:
   - The `strcat` function appends the content of the second string `st2` to the first string `st1`.
   - Example:
     ```c
     char st1[15] = "Hello";
     char st2[15] = "World";
     strcat(st1, st2);
     printf("%s\n", st1);
     ```
   - **Output**: `HelloWorld`
   - **Explanation**: The content of `st2` (`"World"`) is added to `st1`, resulting in `"HelloWorld"`.

5. **Comparing Strings with `strcmp`**:
   - The `strcmp` function compares two strings lexicographically.
   - It returns:
     - `0` if both strings are equal.
     - A negative value if the first string is less than the second string.
     - A positive value if the first string is greater than the second string.
   - Example:
     ```c
     char string1[] = "Hello";
     char string2[] = "World";
     int result = strcmp(string1, string2);
     int result2 = strcmp(string2, string1);
     printf("Result of 1st comparison = %d\n", result);
     printf("Result of 2nd comparison = %d\n", result2);
     ```
   - **Output**:
     ```
     Result of 1st comparison = -15
     Result of 2nd comparison = 15
     ```
   - **Explanation**: The comparison is based on the ASCII values of the characters. `"Hello"` comes before `"World"`, so the first comparison gives a negative result, and the second gives a positive result.

## Output

When the code is executed, the output will be:

```
Length of string is 3
st contains - Sam, CopyCat contains - Sam
HelloWorld
Result of 1st comparison = -15
Result of 2nd comparison = 15
```

This output confirms the proper functioning of the string handling functions used in the program.

## Key Takeaways

- **String Handling in C**: Understanding and using the basic string functions like `strlen`, `strcpy`, `strcat`, and `strcmp` are essential for efficient string manipulation in C.
- **Memory Considerations**: Always ensure the destination strings (`CopyCat`, `st1`, etc.) are large enough to hold the resulting string, especially when using `strcpy` and `strcat`.
- **Lexicographical Comparison**: The `strcmp` function provides a way to compare strings based on their lexicographical order, which can be useful for sorting and other operations.