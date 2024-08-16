#include <stdio.h> 
// Write a program using function to find average of three numbers. 
float avg(int, int, int );
float avg(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main(){
    int n1 = 10, n2 = 21, n3 = 28;
    printf("Average of %d, %d, %d is %.3f", n1, n2, n3, avg(n1, n2, n3));
    return 0;
}