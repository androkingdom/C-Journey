#include <stdio.h> 

int main(){
    int arra[] = {1, 8, 3};
    for(int i = 0; i < 3; i++){
        printf("Addres of %d is %u\n", arra[i], &arra[i]);
    }

    int* ptr_to_arra = arra;
    printf("Pointer to array is %u\n", ptr_to_arra); // `ptr_to_arra` is equal to `&arra[0]`

    for(int i = 0; i < 3; i++){
        printf("Value at %u is %d\n", ptr_to_arra, *ptr_to_arra);
        ptr_to_arra++;
    }

    // 2-d array
    int arry2D[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    printf("Acessing value in 2-d array at 1st row, 1st column => %d\n", arry2D[0][0]);  // Acessing value in 2-d arry <array_name>[row][col], where row and column start from 0 to n-1


    // Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

    int row;
    int col;
    int number;
    printf("Create 2-d array"); // 2-d array is same as matrix
    printf("Enter number of row: ");
    scanf("%d", &row);
    printf("Enter number of col: ");
    scanf("%d", &col);
    int ary[row][col];
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for [%d][%d] :", i+1, j+1);
            scanf("%d", &number);
            ary[i][j] = number;
        }
    }

    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", ary[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}