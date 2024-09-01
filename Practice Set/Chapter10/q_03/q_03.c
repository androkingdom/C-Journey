#include <stdio.h> 

int main(){
    // Write a program to read a text file character by character and write its content twice in separate file
    FILE *fileptr;
    FILE *fileptr2;
    char ch;
    fileptr = fopen("q_03a.txt", "r");
    fileptr2 = fopen("q_03b.txt", "a");
    for (int i = 0; i < 2; i++){
        while (1){
            ch = fgetc(fileptr);
            fprintf(fileptr2,"%c",ch);
            if(ch == EOF){
                break;
            }
        }
        fprintf(fileptr2, "\n");
        rewind(fileptr);
    }
    fclose(fileptr);
    fclose(fileptr2);
    printf("Content written\n");
    return 0;
}