#include <stdio.h> 
#include <string.h>

// Initilizing structure layout outside the main function
struct dict{
    int roll; 
    char name[30];
}; // semi-colon is must

struct emp{
int code; // This declares a new user defined data type!
float salary;
char name[10];
};

int main(){
    struct dict s1; // s1 as structure
    // struct dict s1, s2; // multiple structure in single statment
    s1.roll = 101;
    strcpy(s1.name, "Sam");
    printf("%s have %d roll.no.\n", s1.name, s1.roll);

    // Quick Quiz: Write a program to store the details of 3 employees.
    struct emp emp1, emp2, emp3;
    emp1.code = 101;
    emp2.code = 102;
    emp3.code = 103;
    emp1.salary = 200000;
    emp2.salary = 350000;
    emp3.salary = 250000;
    strcpy(emp1.name, "Rahul");
    strcpy(emp2.name, "Rohan");
    strcpy(emp3.name, "Akash");

    // ARRAY OF STRUCTURES
    struct emp employee[3];
    
    for (int i = 0; i < 3; i++){
        employee[i].code = i+101;
    }
    employee[0].salary = 200000;
    employee[1].salary = 350000;
    employee[2].salary = 250000;

    strcpy(employee[0].name, "Rahul");
    strcpy(employee[1].name, "Rohan");
    strcpy(employee[2].name, "Akash");

    for (int i = 0; i < 3; i++){
        printf("Employee %d\n", i+1);
        printf("%dst Employee code - %d\n", i+1, employee[i].code);
        printf("%dst Employee name - %s\n", i+1, employee[i].name);
        printf("%dst Employee salary - %f\n", i+1, employee[i].salary);
    }
    
    return 0;
}