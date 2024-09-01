# String Handling and Printing in C

## Overview
This C program demonstrates basic string handling, including string declaration, printing strings using a custom function, and taking user input with `scanf`. It showcases two methods of declaring strings and highlights the importance of null-termination in C strings.

## Code Example
```c
#include <stdio.h> 
void print_string(char a[], int len){
    for (int i = 0; i < len; i++)   
    {
        printf("%c", a[i]);
    }
    printf("\n");
}

int main(){
    // String declaration
    char myname[] = {'S', 'a', 'm', '\0'}; // Method 1st
    char myname_2[] = "Sam";

    print_string(myname, sizeof(myname));
    print_string(myname_2, sizeof(myname));

    // Quick Quiz: Create a string using double quotes and print its content using a loop.
    char word[] = {'H', 'a', 'p',  'p', 'y', '\0'};
    print_string(word, sizeof(word));

    // Printing String
    char word2[] = "Hello World !!";
    printf("%s\n", word2);

    // Format specifier for string -> %s
    char Your_name[13];
    printf("Enter Name: ");
    scanf("%s", Your_name);
    printf("Your name: %s\n", Your_name);
    return 0;
}
```

## Explanation of Code

1. **Function Definition**:
   ```c
   void print_string(char a[], int len) {
       for (int i = 0; i < len; i++) {
           printf("%c", a[i]);
       }
       printf("\n");
   }
   ```
   This function takes a character array (string) and its length as parameters. It iterates through the array and prints each character until it reaches the end.

2. **Main Function**:
   ```c
   int main() {
       char myname[] = {'S', 'a', 'm', '\0'}; // Method 1
       char myname_2[] = "Sam"; // Method 2
   ```
   Two strings are declared: one using an array of characters with explicit null-termination and another using a string literal.

3. **Printing Strings**:
   ```c
   print_string(myname, sizeof(myname));
   print_string(myname_2, sizeof(myname));
   ```
   The `print_string` function is called to print both strings.

4. **Creating and Printing Another String**:
   ```c
   char word[] = {'H', 'a', 'p', 'p', 'y', '\0'};
   print_string(word, sizeof(word));
   ```
   A new string "Happy" is created and printed using the same function.

5. **Using `printf` for String Output**:
   ```c
   char word2[] = "Hello Word !!";
   printf("%s\n", word2);
   ```
   This line demonstrates the use of `printf` with the `%s` format specifier to print a string directly.

6. **Taking User Input**:
   ```c
   char Your_name[13];
   printf("Enter Name:");
   scanf("%s", Your_name);
   printf("Your name : %s\n", Your_name);
   ```
   The program prompts the user to enter their name, which is stored in the `Your_name` array.

## Use of `scanf` in Taking String Input
The `scanf` function is used to read formatted input from the standard input (keyboard). In this case, it reads a string until a whitespace character is encountered.

### Cons/Notes:
- **Buffer Overflow**: If the user inputs a string longer than the allocated size of `Your_name` (13 characters in this case), it can lead to buffer overflow, causing undefined behavior or program crashes.
- **No Whitespace Handling**: `scanf("%s", Your_name)` stops reading input at the first whitespace. If the user enters a name with spaces (e.g., "John Doe"), only "John" will be stored in `Your_name`.
- **Lack of Input Validation**: The program does not check if the input exceeds the buffer size, which can lead to security vulnerabilities.