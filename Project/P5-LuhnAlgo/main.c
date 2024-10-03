#include <stdio.h> 

void number2Array(long long l, int a[], int* size){
    long long number = l;
    int index = 0;
    while(number != 0){
        a[index] = (number%10);
        number /= 10;
        index++;
    }
    *size = index;
}

int isValidCard(int a[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        if(i%2!=0){
            a[i] *= 2;
            if(a[i] > 9){
                a[i] -= 9;
                sum += a[i];
            }else{
                sum += a[i];
            }
        }else{
            sum += a[i];
        }
    }
    if(sum % 10 == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    long long l;
    int numberLst[30];
    int size;

    printf("Enter Card Number: ");
    scanf("%lld", &l);

    number2Array(l, numberLst, &size);
    
    int result = isValidCard(numberLst, size);
    if(result == 1){
        printf("%lld is valid\n", l);
    }else{
        printf("%lld is not valid\n", l);
    }
    return 0;
}