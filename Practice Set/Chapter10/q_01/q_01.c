#include <stdio.h> 

int main(){
    // Write a program to read three integers from a file.
    FILE *fileptr;
    int data[3];
    int i = 0;
    fileptr = fopen("q_01.txt", "r");
    if (fileptr == NULL){
        printf("Error in file: 404\n");
    }
    
    while (fscanf(fileptr, "%d", &data[i]) != EOF){
        printf("%d\n", data[i]);
        i++;
    }
    
    fclose(fileptr);
    return 0;
}