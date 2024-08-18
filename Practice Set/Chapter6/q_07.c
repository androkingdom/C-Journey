#include <stdio.h> 
#include <stdio.h> 
// Try q_03 using call by value and verify that it does not change the value of the said variable.
void X10(int);
void X10(int num){
    num = num * 10;
}
int main(){
    int a = 20;
    X10(a);
    printf("value of a is %d", a); 
    return 0;
}