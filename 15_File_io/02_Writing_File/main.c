#include <stdio.h> 

int main(){
    FILE *filePTR;
    int data = 10;
    filePTR = fopen("dummy.txt", "w");
    fprintf(filePTR, "%d", data);
    fclose(filePTR);
}