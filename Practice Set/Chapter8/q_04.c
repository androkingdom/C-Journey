#include <stdio.h> 
// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.
char* slice(char a[], int start_indx, int end_indx){
    char* ptr1 = &a[start_indx];
    char* ptr2 = &a[end_indx];

    a = ptr1;
    a[end_indx] = '\0';
    return a;
}
int main(){
    char name[] = "hello world";
    printf("New string = %s", slice(name, 0, 4));
    return 0;
}