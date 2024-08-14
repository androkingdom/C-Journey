#include <stdio.h> 

int main(){
    int i = 10;
    if (i >= 18) {
        printf("You Are Allowed To Drive\n");
    }
    else {
        printf("You Are Not Allowed To Drive\n");
    }
    //Short-hand
    int a = 10;
    int result = (a <= 18) ? 1 : 0;
    printf("Result : %d", result);

    return 0;
}
