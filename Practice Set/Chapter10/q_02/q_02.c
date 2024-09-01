#include <stdio.h> 
void table_process(int n, int tables[]){
    for (int i = 0; i < 10; i++){
        tables[i] = n*(i+1);
    }
}

void table_printer(int tables[], char filename[100]){
    FILE *fileptr;
    int data;
    fileptr = fopen(filename, "w");
    fprintf(fileptr, "Table of %d\n", tables[0]);
    for (int i = 0; i < 10; i++){
        fprintf(fileptr, "\n%d X %d = %d", tables[0], i+1, tables[i]);
    }
    fclose(fileptr);
    printf("Multiplication of %d entered succesfully\n", tables[0]);
}


int main(){
    //  Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted
    FILE *fileptr;
    int data;
    int table_of_data[10];
    fileptr = fopen("q_02.txt", "r");
    fscanf(fileptr, "%d", &data);
    return 0;
    table_process(data, table_of_data);
    table_printer(table_of_data, "q_02.txt");
    fclose(fileptr);
}        