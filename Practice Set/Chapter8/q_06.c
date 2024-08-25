#include <stdio.h> 
// Write a program to encrypt a string by adding 1 to the ascii value of its characters.
void encrypt(char a[]){
    int i = 0;
    while (a[i] != '\0'){
        a[i]++;
        i++;
    }
    
}
int main(){
    char code_me[] = "Andro@1234";
    printf("Normal String - %s\n", code_me);
    encrypt(code_me);
    printf("Code String - %s\n", code_me);
    return 0;
}