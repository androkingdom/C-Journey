#include <stdio.h> 

int main(){
    // Initialized String With Pointer
    char* Hw = "Hello World !!";
    printf("%s\n", Hw);
    Hw = "Hello You !!"; // This can be reassign, unlike using array
    printf("%s\n", Hw);
    return 0;
}