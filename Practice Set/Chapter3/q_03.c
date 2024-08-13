#include <stdio.h> 

int main(){
    // Calculate income tax paid by an employee to the government as per the slabs mentioned below:

    // Income Slab     Tax
    // 2.5 – 5.0L       5%
    // 5.0L - 10.0L     20%
    // Above 10.0L      30%

    float Income, Tax;

    printf("Enter Your Annual Income : ");
    scanf("%f", &Income);

    if (Income <= 250000){
        Tax = 0;
    }
    else if(Income > 250000 && Income <= 500000){
        Tax = (0.05)*(Income - 250000);
    }
    else if(Income > 500000 && Income <= 1000000){
        Tax = (0.05) * (500000 - 250000) + (0.2) * (Income - 500000);
    }
    else if(Income > 1000000){
        Tax = (0.05) * (500000 - 250000) + (0.2) * (1000000 - 500000) + (0.3) * (Income - 1000000);
    }
    else {
        printf("Invalid Income");
    }

    printf("Tax You Have To Pay Is : ");
    printf("%.1f", Tax);
    
    return 0;
}