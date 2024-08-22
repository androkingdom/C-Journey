#include <stdio.h> 
// Write a program containing a function which reverses the array passed to it.
void reverse_it(int a[], int len) {
    for (int i = 0; i < len / 2; i++) {
        int temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }
}

void show_array(int a[], int len){
    printf("[");
    for (int i = 0; i < len; i++)
    {
        printf("%d", a[i]);
        if(i != len-1){
            printf(", ");
        }
        else{
            printf("]");
        }
    }
    printf("\n");
}
int main(){
    int arra[] = {1, 2, 3, 4};
    show_array(arra, 4);
    reverse_it(arra, 4);
    show_array(arra, 4);
    return 0;
}