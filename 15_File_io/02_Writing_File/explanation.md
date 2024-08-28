# File Handling in C

## Overview
This document provides an overview and explanation of basic file handling operations in C, such as writing and appending data to a file. The code examples demonstrate how to use various file modes, handle errors, and perform file operations efficiently. Additionally, the usage of `fgetc()` and `fputc()` functions for character-based file handling is explained with an example.

## Code Explanation
The provided code performs the following operations:

1. **Creating and Opening a File in Write Mode**:
    - The program creates a file pointer and opens a file in write mode to store a string.
    - If the file does not exist, it will be created; if it does, the existing content will be erased.

    ```c
    FILE *filePTR; // Creating file pointer
    char data[] = "Number: "; // Data to write on file

    // Opening or creating a file in write mode
    filePTR = fopen("dummy.txt", "w"); 
    if (filePTR == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Writing data to the file
    fprintf(filePTR, "%s", data); 
    fclose(filePTR); // Closing the file
    ```

2. **Appending Data to the Same File**:
    - The program then opens the file in append mode to add an integer value to the file without altering the existing data.

    ```c
    FILE *filePTR2; // Creating another file pointer
    int data2 = 10; // Data to insert

    // Opening the file in append mode
    filePTR2 = fopen("dummy.txt", "a"); 
    if (filePTR2 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Appending data to the file
    fprintf(filePTR2, "%d", data2); 
    fclose(filePTR2); // Closing the file
    ```

3. **Error Handling**:
    - Before performing write or append operations, the code checks if the file was successfully opened.

### File Modes
When opening a file using `fopen`, you can specify the mode in which the file should be opened. Here are some common modes:

- **`"r"` (read):** Opens a file for reading. The file must exist; otherwise, `fopen` will return `NULL`.
- **`"w"` (write):** Opens a file for writing. If the file exists, its content is erased. If the file doesn't exist, a new file is created.
- **`"a"` (append):** Opens a file for appending. If the file exists, new data is written at the end of the file. If the file doesn't exist, a new file is created.
- **`"r+"` (read/update):** Opens a file for both reading and writing. The file must exist.
- **`"w+"` (write/update):** Opens a file for both reading and writing. If the file exists, its content is erased. If the file doesn't exist, a new file is created.
- **`"a+"` (append/update):** Opens a file for both reading and writing. If the file exists, new data is written at the end of the file. If the file doesn't exist, a new file is created.

### File Output
After running the above code, the content of `dummy.txt` will be:
```
Number: 10
```

## Additional File Operations
### Character-Based File Handling with `fgetc()` and `fputc()`
The `fgetc()` function reads a character from a file, while `fputc()` writes a character to a file.

#### Example Code

```c
#include <stdio.h>

int main() {
    FILE *filePTR;
    char ch;

    // Opening a file in write mode
    filePTR = fopen("example.txt", "w");
    if (filePTR == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Writing characters to the file
    fputc('H', filePTR);
    fputc('e', filePTR);
    fputc('l', filePTR);
    fputc('l', filePTR);
    fputc('o', filePTR);
    fclose(filePTR); // Closing the file

    // Opening the file in read mode
    filePTR = fopen("example.txt", "r");
    if (filePTR == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Reading characters from the file
    while ((ch = fgetc(filePTR)) != EOF) {
        putchar(ch); // Printing the character to the console
    }
    fclose(filePTR); // Closing the file

    return 0;
}
```

#### Explanation
1. **Writing Characters**: The `fputc()` function writes individual characters to the file `example.txt`.
2. **Reading Characters**: The `fgetc()` function reads characters from the file until the end of the file (EOF) is reached and prints them to the console.

## Conclusion
This document provided an overview of basic file handling in C, including writing and appending data to a file, along with handling errors and different file modes. It also covered character-based file operations using `fgetc()` and `fputc()` functions, demonstrating how to read and write characters to a file.
