#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float eng, maths, sci, total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks in English: ");
    scanf("%f", &eng);

    printf("Enter Marks in Maths: ");
    scanf("%f", &maths);

    printf("Enter Marks in Science: ");
    scanf("%f", &sci);

    total = eng + maths + sci;
    percentage = total / 3;

    printf("\n----- MARKSHEET -----\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", roll);
    printf("English    : %.2f\n", eng);
    printf("Maths      : %.2f\n", maths);
    printf("Science    : %.2f\n", sci);
    printf("Total      : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 75)
        printf("Grade : A\n");
    else if (percentage >= 60)
        printf("Grade : B\n");
    else if (percentage >= 40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;
}