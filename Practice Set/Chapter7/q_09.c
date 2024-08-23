#include <stdio.h> 

int main(){
    // Create a three–dimensional array and print the address of its elements in increasing order
    int arra[3][3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%u,", &arra[i][j][k]); 
                p
            }
            printf("\n"); 
        }
        printf("\n"); 
    }
    
    return 0;
}