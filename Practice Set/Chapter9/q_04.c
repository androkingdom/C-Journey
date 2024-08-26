#include <stdio.h> 
// Write a program to illustrate the use of arrow operator → in C
struct data{
    int code;
    char name[30];
};
int main(){
    struct data d1 = {101, "Rohan"};
    struct data *ptr = &d1;
    printf("Code is %d and Name is %s\n", ptr -> code, ptr -> name);
    return 0;
}