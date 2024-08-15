#include <stdio.h> 

int main(){
    // int i = 0;

    // do
    // {
    //     printf("Hello World %d\n", i);
    // } while (i != 0);
    // printf("Loop Break After 1 Execution\n");
    
    // do
    // {
    //     printf("Hello World %d\n", i);
    //     i++;
    // } while (i <= 9);

    // Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop

    int Range, zeros = 1;
    printf("Enter Number: ");
    scanf("%d", &Range);
    do{
        printf("%d\n", zeros);
        zeros++;
    }while(zeros <= Range);
    
    return 0;
}
