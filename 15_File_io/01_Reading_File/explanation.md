# File I/O: Reading Files in C

## Overview
This document explains how to perform basic file I/O operations in C, focusing on reading data from a file and handling errors if the file doesn't exist. The provided code demonstrates how to open a file, read an integer from it, and check if the file exists before attempting to read it.

## Code

```c
#include <stdio.h> 

int main(){
    // Opening file in C
    FILE *ptr; // Creating FILE datatype pointer
    int fileData; // variable to store file data
    ptr = fopen("dummy.txt", "r"); // opening file in read mode
    fscanf(ptr, "%d", &fileData); // reading an integer from the file
    printf("Data in file -> %d\n", fileData);
    fclose(ptr); // Closing the file after reading

    // Quick Quiz: Modify the program above to check whether the file exists or not before opening the file.
    FILE *ptr2; // Creating a pointer for the second file
    ptr2 = fopen("dummy2.txt", "r"); // Trying to open a second file

    // By ternary operator
    (ptr2 == NULL) ? printf("Error 404: File Not Found\n") : printf("Here is the file data\n"); // Check if file exists

    // By if-else (commented out)
    // if(ptr2 == NULL){  
    //     printf("Error 404: File Not Found\n");
    // } else {
    //     printf("Here is the file data\n");
    // }
    
    return 0;
}
```

## Explanation

### Opening a File
```c
FILE *ptr; // Creating FILE datatype pointer
int fileData; // variable to store file data
ptr = fopen("dummy.txt", "r"); // opening file in read mode
```
- **`FILE *ptr;`**: Creates a pointer of type `FILE`, which will be used to reference the file.
- **`int fileData;`**: A variable to store the data read from the file.
- **`ptr = fopen("dummy.txt", "r");`**: Opens the file named `dummy.txt` in read mode (`"r"`). If the file is not found, `ptr` will be `NULL`.

### Reading Data from the File
```c
fscanf(ptr, "%d", &fileData); // reading an integer from the file
printf("Data in file -> %d\n", fileData);
```
- **`fscanf(ptr, "%d", &fileData);`**: Reads an integer from the file and stores it in the variable `fileData`.
- **`printf("Data in file -> %d\n", fileData);`**: Prints the data read from the file.

### File Modes
When opening a file using `fopen`, you can specify the mode in which the file should be opened. Here are some common modes:

- **`"r"` (read):** Opens a file for reading. The file must exist; otherwise, `fopen` will return `NULL`.
- **`"w"` (write):** Opens a file for writing. If the file exists, its content is erased. If the file doesn't exist, a new file is created.
- **`"a"` (append):** Opens a file for appending. If the file exists, new data is written at the end of the file. If the file doesn't exist, a new file is created.
- **`"r+"` (read/update):** Opens a file for both reading and writing. The file must exist.
- **`"w+"` (write/update):** Opens a file for both reading and writing. If the file exists, its content is erased. If the file doesn't exist, a new file is created.
- **`"a+"` (append/update):** Opens a file for both reading and writing. If the file exists, new data is written at the end of the file. If the file doesn't exist, a new file is created.

### Closing the File
```c
fclose(ptr); // Closing file
```
- **`fclose(ptr);`**: Closes the file, which is an important step to free up resources that the program is using.

### Checking if a File Exists
```c
FILE *ptr2; // Creating a pointer for the second file
ptr2 = fopen("dummy2.txt", "r"); // Trying to open a second file

// By ternary operator
(ptr2 == NULL) ? printf("Error 404: File Not Found\n") : printf("Here is the file data\n"); // Check if file exists
```
- **`FILE *ptr2;`**: Creates a new pointer of type `FILE` to handle another file.
- **`ptr2 = fopen("dummy2.txt", "r");`**: Tries to open `dummy2.txt` in read mode. If the file doesn't exist, `ptr2` will be `NULL`.
- The ternary operator checks if `ptr2` is `NULL`. If it is, the program prints `"Error 404: File Not Found"`. Otherwise, it prints `"Here is the file data"`.

### Alternative: Using if-else
```c
if(ptr2 == NULL){  
    printf("Error 404: File Not Found\n");
} else {
    printf("Here is the file data\n");
}
```
- This section shows an alternative way to check if the file exists using an if-else statement. This method is more explicit but less concise than the ternary operator.

## Output
Assuming `dummy.txt` contains the integer `42` and `dummy2.txt` does not exist, the output will be:
```
Data in file -> 42
Error 404: File Not Found
```