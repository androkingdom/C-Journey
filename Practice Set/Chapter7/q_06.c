#include <stdio.h> 
// Write a program containing functions which counts the number of positive integers in an array.
int FindPos(int arry[], int len){
    int pos_nums = 0;
    for (int i = 0; i < len; i++)
    {
        if (arry[i] > 0){
            pos_nums++;
        }
        else{
            continue;
        }
    }
    return pos_nums;
}

int main(){
    int ara[] = {1, 2, -1, -5};
    printf("Number of positive integer is %d\n", FindPos(ara, 4)); 
    return 0;
}