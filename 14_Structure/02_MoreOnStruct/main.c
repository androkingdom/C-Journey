#include <stdio.h> 
// Create a structure
struct emp{
    int ecode;
    char name[30];
    float salary;
};

// Quick Quiz: Complete this show function to display the content of employee.
void showStruct(struct emp e);// Function taking struct prototype
void showStruct(struct emp e){
    printf("{");
    printf("%d, ", e.ecode);
    printf("%s, ", e.name);
    printf("%.2f", e.salary);
    printf("}");
    printf("\n");
}

// typedef keyword -> give a alias to corresponding datatype
typedef struct student{
    int roll;
    char name[30];
} stu;



int main(){
    // New way to initialize structure
    struct emp emp1 = {101, "Harry", 20000};
    printf("%d, %s, %.2f\n", emp1.ecode, emp1.name, emp1.salary);

    // pointer to structure
    struct emp *ptr;
    ptr = &emp1;
    printf("employee code - %d\n", (*ptr).ecode);

    // Arrow Structure Method
    printf("Employee name - %s\n", ptr -> name); // `->` is arrow operator

    // Passing struct in function
    showStruct(emp1); // function to show  struct

    // typedef keyword usage
    stu s1 = {1, "Harry"}; // Easy to initialize struct
    printf("%d, ", s1.roll);
    printf("%s\n", s1.name);
    return 0;
}