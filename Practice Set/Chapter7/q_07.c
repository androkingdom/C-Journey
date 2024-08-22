#include <stdio.h> 

int main(){
    // Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.
    int table_of[] = {2, 7, 9};
    int Tables_Collection[3][10];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            Tables_Collection[i][j] = table_of[i]*j+1;
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