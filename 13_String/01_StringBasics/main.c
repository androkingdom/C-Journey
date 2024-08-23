#include <stdio.h> 
void print_string(char a[], int len){
    for (int i = 0; i < len; i++)   
    {
        printf("%c", a[i]);
    }
    printf("\n");
}
int main(){
    // String declearation
    char myname[] = {'S', 'a', 'm', '\0'}; // Method 1st
    char myname_2[] = "Sam";

    print_string(myname, sizeof(myname));
    print_string(myname_2, sizeof(myname));

    // Quick Quiz: Create a string using double quotes and print its content using a loop.
    char word[] = {'H', 'a', 'p',  'p', 'y', '\0'};
    print_string(word, sizeof(word));

    // Printing String
    char word2[] = "Hello Word !!";
    printf("%s\n", word2);

    // Formate specifier for string-> %s
    char Your_name[13];
    printf("Enter Name:");
    scanf("%s", Your_name);
    printf("Your name : %s\n", Your_name);
    return 0;
}