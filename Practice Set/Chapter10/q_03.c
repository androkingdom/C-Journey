#include <stdio.h> 

int main(){
    // Write a program to read a text file character by character and write its content twice in separate file
    FILE *fileptr;
    FILE *fileptr2;
    fileptr = fopen("q_03a.txt", "r");
    for (int i = 0; i < 2; i++){
        while(1){
            fileptr2 = fopen("q_03b.txt", "a");
            fputc(fgetc(fileptr), fileptr2);
            if(fgetc(fileptr) != EOF){
                break;
            }
        }
    }
    
    fclose(fileptr2);
    fclose(fileptr);
    return 0;
}