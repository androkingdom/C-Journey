#include <stdio.h>

int main()
{
    int number1=81, number2=83, number3=6, number4=10, max;

    if (number1 > number2 && number1 > number3 && number1 > number4)
    {
        max = number1;
    }
    else if (number2 > number1 && number2 > number3 && number2 > number4)
    {
        max = number2;
    }
    else if (number3 > number2 && number3 > number1 && number3 > number4)
    {
        max = number3;
    }
    else if (number4 > number2 && number4 > number3 && number4 > number4)
    {
        max = number4;
    }

    printf("Greatest number is %d", max);

    return 0;
}