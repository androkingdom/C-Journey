
# Working with Structures in C

## Overview

In C programming, structures allow you to group different types of variables under a single name. This is particularly useful for representing complex data types like records, which can include multiple attributes of an entity. This document will guide you through defining and using structures in C, including initializing structures, using pointers to structures, and passing structures to functions.

## Code Example

Here’s the complete code with beginner-friendly comments:

```c
#include <stdio.h> 

// Define a structure for employee details
struct emp {
    int ecode;             // Employee code (unique ID for each employee)
    char name[30];         // Employee name (up to 30 characters)
    float salary;          // Employee salary (in currency units)
};

// Function prototype to display the content of an employee structure
void showStruct(struct emp e);

// Function to display the content of an employee structure
void showStruct(struct emp e) {
    printf("{%d, %s, %.2f}\n", e.ecode, e.name, e.salary); // Print all details of the employee
}

// Define a structure for student details using typedef for simpler syntax
typedef struct student {
    int roll;              // Student roll number (unique ID for each student)
    char name[30];         // Student name (up to 30 characters)
} stu;

int main() {
    // Initialize an employee structure with example data
    struct emp emp1 = {101, "Harry", 20000.00};
    printf("%d, %s, %.2f\n", emp1.ecode, emp1.name, emp1.salary); // Display employee details

    // Create a pointer to the employee structure
    struct emp *ptr = &emp1; // 'ptr' now points to 'emp1'

    // Access structure members using the pointer
    printf("Employee code - %d\n", (*ptr).ecode); // Accessing 'ecode' through pointer
    printf("Employee name - %s\n", ptr->name);    // Using arrow operator as shorthand

    // Pass the structure to a function to display its details
    showStruct(emp1);

    // Initialize a student structure using typedef for easier syntax
    stu s1 = {1, "Harry"};  // Create and initialize a student structure
    printf("%d, %s\n", s1.roll, s1.name); // Display student details

    return 0;
}
```

## Structure Definition and Initialization

### Defining a Structure

A structure is defined using the `struct` keyword. Here's how you can define a structure for an employee and a student:

```c
#include <stdio.h>

// Define a structure for employee details
struct emp {
    int ecode;             // Employee code (integer)
    char name[30];         // Employee name (string with max 30 characters)
    float salary;          // Employee salary (floating-point number)
};

// Define a structure for student details using typedef for easier usage
typedef struct student {
    int roll;              // Student roll number (integer)
    char name[30];         // Student name (string with max 30 characters)
} stu;
```

### Initializing a Structure

After defining a structure, you can create and initialize structure variables like this:

```c
int main() {
    // Initialize an employee structure with values
    struct emp emp1 = {101, "Harry", 20000.00};
    printf("%d, %s, %.2f\n", emp1.ecode, emp1.name, emp1.salary); // Display employee details

    // Initialize a student structure using typedef for simplicity
    stu s1 = {1, "Harry"};
    printf("%d, %s\n", s1.roll, s1.name); // Display student details

    return 0;
}
```

### Pointers to Structures

You can also create pointers to structures, which allows for efficient access and modification of structure members:

```c
int main() {
    struct emp emp1 = {101, "Harry", 20000.00}; // Create and initialize an employee structure
    struct emp *ptr = &emp1; // Create a pointer to the structure and assign the address of emp1

    // Access structure members using pointer dereferencing
    printf("Employee code - %d\n", (*ptr).ecode);

    // Access structure members using the arrow operator (shortcut for pointers)
    printf("Employee name - %s\n", ptr->name);

    return 0;
}
```

### Passing Structures to Functions

Structures can be passed to functions, allowing you to operate on them within the function. Here's an example:

```c
// Function prototype to display the content of an employee structure
void showStruct(struct emp e);

// Function definition to display the content of an employee structure
void showStruct(struct emp e) {
    printf("{%d, %s, %.2f}\n", e.ecode, e.name, e.salary); // Print structure details
}

int main() {
    struct emp emp1 = {101, "Harry", 20000.00}; // Initialize structure
    showStruct(emp1); // Pass structure to function to display its content

    return 0;
}
```

## Output

```
101, Harry, 20000.00
Employee code - 101
Employee name - Harry
{101, Harry, 20000.00}
1, Harry
```