#include <stdio.h> 
// Write your own version of strcpy function from <string.h>
void copyto(char str_from[], char str_to[]){
    int i = 0;
    while(str_from[i] != '\0'){
        str_to[i] = str_from[i];
        i++;
    }
    str_to[i] = '\0';
}
int main(){
    char str1[] = "Hello";
    char str2[10];
    printf("%s, %s\n", str1, str2);
    copyto(str1, str2);
    printf("%s, %s\n", str1, str2);
    return 0;
}