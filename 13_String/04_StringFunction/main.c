#include <stdio.h> 
#include <string.h> // String.h header file

int main(){

    // strlen(<string_name>) -> return number of char in string excluding null char
    char st[] = "Sam"; // Initializing string
    printf("Length of string is %d\n", strlen(st)); 

    
    // strcpy(<target>, <source>) -> change the string in target string to source string
    char CopyCat[15]; // Empty string
    strcpy(CopyCat, st); 
    printf("st contain - %s, CopyCat contain - %s\n", st, CopyCat);

    // strcat(<string_1>, <string_2>) -> Concatenate both string and assign to string_1
    char st1[15] = "Hello"; // string 1
    char st2[15] = "World" ; // string 2
    strcat(st1, st2); // Concatenated string send to `st1`
    printf("%s\n", st1);

    // strcmp(<string_1>, <string_2>) -> Compare two string, and return 0 if both string matched
    char string1[] = "Hello";
    char string2[] = "World";
    int result = strcmp(string1, string2); // return -ive number if <string_1> come first according to dictionary
    int result2 = strcmp(string2, string1); // return +ive number if <string_1> come first according to dictionary
    printf("Result of 1st comparision = %d\n", result);
    printf("Result of 2nd comparision = %d\n", result2);
    
    return 0;
}