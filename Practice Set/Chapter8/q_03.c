#include <stdio.h> 
#include <string.h>

// Write your own version of strlen function from <string.h>
int len(char a[]){
    int i = 0;
    while (a[i] != '\0'){
        i++;
    }
    return i;
}
int main(){
    char word[] = "happy happy";
    printf("Length of %s is %d", word, len(word));
    return 0;
}