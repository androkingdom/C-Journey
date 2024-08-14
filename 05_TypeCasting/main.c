#include <stdio.h> 
// int and int → int
// int and float → float
// float and float → float

int main(){
    float a = (9/2); // Answer will be 4 not 4.5 !
    printf("%f\n",a);
    //For Getting 4 As Result
    float b = (9.0/2);
    printf("%f\n",b);
    float a2 = 12.3;
    int b2 = (int) a2;
    printf("hello %d",b2);
    return 0;
}