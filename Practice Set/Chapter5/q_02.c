#include <stdio.h> 
// Write a function to convert Celsius temperature into Fahrenheit.
// (°C × 9/5) + 32 = °F
float celsius_to_fahrenheit(float);
float celsius_to_fahrenheit(float celsius_temp){
    return (celsius_temp * 9.0/5) + 32;
}
int main(){
    float Celsius_Temp = 0;
    printf("%.3f deg C = %.3f deg F", Celsius_Temp, celsius_to_fahrenheit(Celsius_Temp)); 
    return 0;
}