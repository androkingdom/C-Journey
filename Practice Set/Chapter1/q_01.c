// Hard Coded
// #include <stdio.h> 

// int main(){
//     int LengthOfRec = 10;
//     int BreathOfRec = 20;
//     int AreaOfRec = LengthOfRec * BreathOfRec;
//     printf("Area Of Rectangle %d Cm" , AreaOfRec);
//     return 0;
// }

// Dynamicly Coded
#include <stdio.h> 

int main(){
    int LengthOfRec;
    int BreathOfRec;
    printf("Enter Length Of Rectangle (in cm) : ");
    scanf("%d" , &LengthOfRec);
    printf("Enter Breath Of Rectangle (in cm) : ");
    scanf("%d" , &BreathOfRec);
    int AreaOfRec = LengthOfRec * BreathOfRec;
    printf("Area Of Rectangle %d Cm" , AreaOfRec);
    return 0;
}