#include <stdio.h> 

int main(){
    float Cel_Temp = 37;
    float Far_Temp;

    Far_Temp = (Cel_Temp * 9/5) + 32;
    printf("%f deg C = %f deg F" , Cel_Temp , Far_Temp); 
    return 0;
}