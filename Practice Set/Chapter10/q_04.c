#include <stdio.h> 

typedef struct emp{
    char name[30];
    float sal;
} emp;

int main(){
    // Take name and salary of two employees as input from the user and write them to a text file in the following format:
    // i. Name1, 3300
    // ii. Name2, 7700
    emp employees[2];
    for (int i = 0; i < 2; i++){
        printf("Enter Name of %d employee: ", i+1);
        scanf("%s", employees[i].name);
        printf("Enter salary of %d employee: ", i+1);
        scanf("%f", &employees[i].sal);
        printf("\n");
    }

    FILE *fileptr;
    int data;
    fileptr = fopen("q_04.txt", "a");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < i+1; j++){
            fprintf(fileptr, "i");
        }
        fprintf(fileptr, ". %s, %f\n", employees[i].name, employees[i].sal);
    }
    
    fclose(fileptr);
    
    return 0;
}