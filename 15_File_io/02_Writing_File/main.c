#include <stdio.h> 

int main(){
    FILE *filePTR; // Creating file pointer
    char data[] = "Number: ";// Data to write on file
    filePTR = fopen("dummy.txt", "w"); // opening or fetching file on `write` mode
    fprintf(filePTR, "%s", data); // writing on file
    fclose(filePTR); // closing file

    FILE *filePTR2; // Creating file
    int data2 = 10; // data to insert
    filePTR2 = fopen("dummy.txt", "a"); // opening or fetching file on `append` mode
    fprintf(filePTR2, "%d", data2); // appending data
    fclose(filePTR2); // closing file
}