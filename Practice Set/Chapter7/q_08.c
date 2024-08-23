#include <stdio.h> 

int main(){
    // Repeat problem q_07 for a custom input given by the user
    int table_of[3];
    for (int numbers = 0; numbers < 3; numbers++)
    {
        int number;
        printf("Enter number %d:", numbers+1); 
        scanf("%d", &number);
        table_of[numbers] = number;
    }
    
    int Tables_Collection[3][10];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            Tables_Collection[i][j] = table_of[i]*(j+1);
        }
    }
    
    for (int a = 0; a < 3; a++)
    {
        printf("Table of %d\n", table_of[a]); 
        for (int b = 0; b < 10; b++)
        {
            printf("%d X %d = %d\n", table_of[a], b+1, Tables_Collection[a][b]);
        }
        
    }
    return 0;
}