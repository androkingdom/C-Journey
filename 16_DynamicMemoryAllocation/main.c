#include <stdio.h> 
#include <stdlib.h>

int main() {
    int n = 4;
    int* ptr;
    
    // Allocate memory for an array of 4 integers using malloc
    ptr = (int*) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the array with hardcoded values
    for (int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 5; // Values: 5, 10, 15, 20
    }

    // Print the contents of the array
    printf("Array of integers initialized with malloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }
    printf("End of integer array\n\n");

    // Free the allocated memory
    free(ptr);

    // Quick Quiz: Create a dynamic array of 5 floats using malloc
    int n2 = 5;
    float* ptr2;
    
    // Allocate memory for an array of 5 floats
    ptr2 = (float*) malloc(n2 * sizeof(float));
    if (ptr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the array with hardcoded values
    for (int i = 0; i < n2; i++) {
        ptr2[i] = (i + 1) * 1.5; // Values: 1.5, 3.0, 4.5, 6.0, 7.5
    }

    // Print the contents of the array
    printf("Array of floats initialized with malloc:\n");
    for (int i = 0; i < n2; i++) {
        printf("%f\n", ptr2[i]);
    }
    printf("End of float array (malloc)\n\n");

    // Free the allocated memory
    free(ptr2);

    // Quick Quiz: Create an array of size n using calloc where n is an integer entered by the user
    int n3 = 4; // Hardcoded number of elements
    float* ptr3;
    
    // Allocate memory for an array of n3 floats using calloc
    ptr3 = (float*) calloc(n3, sizeof(float));
    if (ptr3 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the array with hardcoded values
    for (int i = 0; i < n3; i++) {
        ptr3[i] = (i + 1) * 2.0; // Values: 2.0, 4.0, 6.0, 8.0
    }

    // Print the contents of the array
    printf("Array of floats initialized with calloc:\n");
    for (int i = 0; i < n3; i++) {
        printf("%f\n", ptr3[i]);
    }
    printf("End of float array (calloc)\n\n");

    // Free the allocated memory
    free(ptr3);

    // Example of realloc: Resize the array to 10 floats
    int n4 = 10;
    float* ptr4;
    
    // Allocate memory for an array of 5 floats
    ptr4 = (float*) malloc(5 * sizeof(float));
    if (ptr4 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the array with hardcoded values
    for (int i = 0; i < 5; i++) {
        ptr4[i] = (i + 1) * 2.5; // Values: 2.5, 5.0, 7.5, 10.0, 12.5
    }

    // Resize the array to hold 10 floats using realloc
    ptr4 = (float*) realloc(ptr4, n4 * sizeof(float));
    if (ptr4 == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Initialize the new elements
    for (int i = 5; i < n4; i++) {
        ptr4[i] = (i + 1) * 3.5; // New values: 21.0, 24.5, 28.0, 31.5, 35.0
    }

    // Print the contents of the resized array
    printf("Array of floats resized with realloc:\n");
    for (int i = 0; i < n4; i++) {
        printf("%f\n", ptr4[i]);
    }
    printf("End of float array (realloc)\n\n");

    // Free the allocated memory
    free(ptr4);

    return 0;
}
