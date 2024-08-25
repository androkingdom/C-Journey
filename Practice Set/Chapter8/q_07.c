#include <stdio.h> 
// Write a program to decrypt the string encrypted using encrypt function in problem 6.
void decrypt(char a[]){
    int i = 0;
    while (a[i] != '\0'){
        a[i]--;
        i++;
    }
    
}
int main(){
    char decode_me[] = "BoespA2345";
    printf("Code String - %s\n", decode_me);
    decrypt(decode_me);
    printf("Normal String - %s\n", decode_me);
    return 0;
}