#include <stdio.h> 

int main(){
    // Repeat problem 3 for a general input provided by the user using scanf
    int table[10];
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    for(int i = 0; i < 10; i++){
        table[i] = number*(i+1);
    }
    printf("Table Of %d\n", number);
    for(int i = 0; i < 10; i++){
        printf("%d X %d = %d\n", number, i+1, table[i]);
    }
    return 0;
}