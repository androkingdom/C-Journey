# Understanding Structures in C

## Overview

In C programming, a structure is a user-defined data type that allows the combination of data items of different kinds. Structures are used to represent a record. For instance, if you want to keep track of your books in a library, you might want to track attributes such as:

- Title
- Author
- Subject
- Book ID

Defining a structure allows you to group these different data types together under a single name, making data management more efficient.

## Structure Definition and Initialization

### Defining a Structure

A structure is defined using the `struct` keyword. Below is an example of defining a structure:

```c
#include <stdio.h>
#include <string.h>

// Defining a structure named 'dict' with an integer 'roll' and a character array 'name'
struct dict {
    int roll; 
    char name[30];
}; // Semicolon is mandatory after the structure definition

// Defining another structure named 'emp' with an integer 'code', a float 'salary', and a character array 'name'
struct emp {
    int code; // Employee code
    float salary; // Employee salary
    char name[10]; // Employee name (limited to 10 characters)
};
```

## Initializing a Structure

Once a structure is defined, you can declare variables of that type and initialize them:

```c
int main() {
    // Declaring a variable 's1' of type 'struct dict'
    struct dict s1; 
    s1.roll = 101; // Assigning roll number
    strcpy(s1.name, "Sam"); // Assigning name using strcpy to handle strings
    printf("%s has roll number %d.\n", s1.name, s1.roll); // Printing the roll number and name
    
    // Declaring multiple 'struct emp' variables to store employee details
    struct emp emp1, emp2, emp3;
    emp1.code = 101; // Assigning employee code
    emp2.code = 102;
    emp3.code = 103;
    emp1.salary = 200000; // Assigning salary
    emp2.salary = 350000;
    emp3.salary = 250000;
    strcpy(emp1.name, "Rahul"); // Assigning names to each employee
    strcpy(emp2.name, "Rohan");
    strcpy(emp3.name, "Akash");

    // ARRAY OF STRUCTURES
    struct emp employee[3]; // Declaring an array of 3 'struct emp' elements
    
    // Loop to initialize employee codes
    for (int i = 0; i < 3; i++) {
        employee[i].code = i + 101; // Assigning unique codes starting from 101
    }
    // Assigning salaries to each employee
    employee[0].salary = 200000;
    employee[1].salary = 350000;
    employee[2].salary = 250000;

    // Assigning names to each employee
    strcpy(employee[0].name, "Rahul");
    strcpy(employee[1].name, "Rohan");
    strcpy(employee[2].name, "Akash");

    // Loop to print each employee's details
    for (int i = 0; i < 3; i++) {
        printf("Employee %d\n", i + 1); // Printing employee number
        printf("%dst Employee code - %d\n", i + 1, employee[i].code); // Printing employee code
        printf("%dst Employee name - %s\n", i + 1, employee[i].name); // Printing employee name
        printf("%dst Employee salary - %f\n", i + 1, employee[i].salary); // Printing employee salary
    }
    
    return 0;
}
```

## Key Concepts

### Structure Members

- **Structure Members**: The data elements within a structure are called members. For instance, `roll`, `salary`, and `name` are members of the `dict` and `emp` structures.

### Accessing Members

You can access structure members using the dot `.` operator:

```c
s1.roll = 101; // Assigning value to 'roll' member
strcpy(s1.name, "Sam"); // Assigning value to 'name' member using strcpy
```

### Array of Structures

You can create arrays of structures to handle multiple records efficiently:

```c
struct emp employee[3]; // Array of 3 Employee structures

// Initializing employee details
employee[0].code = 101;
employee[1].code = 102;
employee[2].code = 103;

strcpy(employee[0].name, "Rahul");
strcpy(employee[1].name, "Rohan");
strcpy(employee[2].name, "Akash");

employee[0].salary = 200000;
employee[1].salary = 350000;
employee[2].salary = 250000;
```

### Nested Structures

Structures can also be nested within other structures. For example:

```c
struct address {
    char city[20]; // City name
    int pin; // Postal code (PIN)
};

// Nested structure within another structure
struct employee {
    int code; // Employee code
    float salary; // Employee salary
    struct address addr; // Employee's address (nested structure)
};
```

### Pointers to Structures

You can also use pointers to structures to access their members:

```c
struct emp *ptr; // Declaring a pointer to 'struct emp'
ptr = &emp1; // Pointing to 'emp1' structure
printf("Employee code: %d\n", ptr->code); // Accessing 'code' member using the pointer
```

### Functions and Structures

Structures can be passed to functions by value or by reference:

```c
// Function to print employee details
void printEmployee(struct emp e) { 
    printf("Employee code: %d\n", e.code); // Accessing 'code' member
    printf("Employee name: %s\n", e.name); // Accessing 'name' member
    printf("Employee salary: %f\n", e.salary); // Accessing 'salary' member
}
```

## Conclusion

This overview of structures in C demonstrates their utility in creating complex data types that model real-world entities more accurately. Structures are a powerful feature in C, allowing you to organize and manage data efficiently.