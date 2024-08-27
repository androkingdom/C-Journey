#include <stdio.h> 

int main(){
    // Opening file in C
    FILE *ptr; // Creating FILE datatype pointer
    int fileData; // variable to store file data
    ptr = fopen("dummy.txt", "r"); // opening file data
    fscanf(ptr, "%d", &fileData); // reading file
    printf("Data in file -> %d\n", fileData);
    fclose(ptr); // Closing file

    // Quick Quiz: Modify the program above to check whether the file exists or not before opening the file.
    FILE *ptr2; // Creating pointer
    ptr2 = fopen("dummy2.txt", "r"); // Fetching file

    // By ternary operator
    (ptr2 == NULL)?printf("Error 404: File Not Found\n") : printf("Here the file data\n"); // Checking if file exists

    //By if-else
    // if(ptr2 == NULL){ // 
    //     printf("Error 404: File Not Found\n");
    // }else{printf("Here the file data\n");}
    
    return 0;
}