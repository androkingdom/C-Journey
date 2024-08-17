#include <stdio.h> 

void change(int*);
void change(int* a){
    // random seed * (max - min + 1) + min
    *a = *a * 20 ;
}

void swap(int* a, int*b);
void swap(int* a, int*b){
    int alpha = *a;
    *a = *b;
    *b = alpha;
}
int main(){
    // Change function
    int num = 1;
    change(&num);
    printf("Value of num is %d\n", num);

    // Swap function
    int num1 = 10;
    int num2 = 20;
    printf("Value of num1 is %d and num2 is %d\n", num1, num2); // value before swap function
    swap(&num1, &num2);
    printf("Value of num1 is %d and num2 is %d\n", num1, num2); // value after swap function
    return 0;
}