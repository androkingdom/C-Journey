#include <stdio.h> 
#include <math.h>
// 1634 = 1^4 + 6^4 + 3^4 + 4^4
int NumberLen(int n){
    int count = 0;
    while (n != 0){
        n /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int number){
    int sum = 0;
    int n = number;
    int number_of_digit = NumberLen(number);
    while (n != 0){
        sum += pow((n % 10), number_of_digit); // number % 10 = last digit of number
        n /= 10;
    }  
    return (sum==number);
}

int main(){
    int number;
    printf("Enter number to check if number is armstrong or not\n");
    printf("Enter number: ");
    scanf("%d", &number);
    int result = isArmstrong(number);
    if(result){
        printf("Number is armstrong\n");
    }
    else{
        printf("Number is not armstrong\n");
    }

    return 0;
}