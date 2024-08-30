#include <stdio.h> 

int main(){
    // Write a program to modify a file containing an integer to double its value.
    FILE *fileptr;
    int data;
    fileptr = fopen("q_05.txt", "r");
    fscanf(fileptr, "%d", &data);
    fclose(fileptr);
    
    fileptr = fopen("q_05.txt", "w");
    fprintf(fileptr, "%d", data*2);
    fclose(fileptr);
    printf("File Altered\n");
    return 0;
}