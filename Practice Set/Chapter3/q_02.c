#include <stdio.h>

int main()
{
    // Write a program to determine whether a student has passed or failed.To pass, a student requires a total of
    // 40 % and at least 33 % in each subject.Assume there are three subjects and take the marks as input from the
    // user

    // Initalize Variables
    float Maxmarks = 50;
    float Sub1;
    float Sub2;
    float Sub3;
    float Sub1Per;
    float Sub2Per;
    float Sub3Per;
    float TotalPercent;

    // Marks are given out of 50
    printf("Max. Marks Is 50\n\n");

    // Taking User Input
    printf("Enter First Subject Marks : ");
    scanf("%f", &Sub1);
    printf("Enter Second Subject Marks : ");
    scanf("%f", &Sub2);
    printf("Enter Third Subject Marks : ");
    scanf("%f", &Sub3);

    // Finding Percentage Per Subject
    Sub1Per = (Sub1 / Maxmarks) * 100;
    Sub2Per = (Sub2 / Maxmarks) * 100;
    Sub3Per = (Sub3 / Maxmarks) * 100;

    // Finding Total Percentage
    TotalPercent = ((Sub1 + Sub2 + Sub3) / (Maxmarks * 3)) * 100;

    // Checking If Student Fail Or Not
    if (Sub1Per >= 33 && Sub2Per >= 33 && Sub3Per >= 33 && TotalPercent >= 40)
    {
        printf("Percentage : %f\n", TotalPercent);
        printf("-----------------------------\n");
        printf("Student Passed In Exam\n");
    }
    else
    {
        printf("Percentage : %f\n", TotalPercent);
        printf("-----------------------------\n");
        printf("Student Failed In Exam\n");
    }

    printf("-----------------------------\n");
    printf("Subject Wise Percentage\n");
    printf("First Subject : %f\n", Sub1Per);
    printf("Second Subject : %f\n", Sub2Per);
    printf("Third Subject : %f\n", Sub3Per);

    return 0;
}