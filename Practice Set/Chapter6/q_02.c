#include <stdio.h> 

int my_address(int v);
int my_address(int v){
    printf("Address of i using function is %p\n", &v);
    return 0;
}

int main(){
    // Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why? 
    int i = 10;
    printf("Address of i is %p\n", &i);
    my_address(i);
    return 0;
}