#include <stdio.h> 

int main(){
    int age;
    printf("Enter Age : "); 
    scanf("%d", &age);
    switch (age)
    {
    case 18:
        printf("You Are __");
        break;

    case 60:
        printf("You Are __");
        break;

    case 90:
        printf("You Are __");
        break;
    
    default:
        printf("You Are %d", age);
        break;
    }
    return 0;
}