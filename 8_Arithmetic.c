/* Write a program that accept Two numeric value from user and print Addition, Substration, Multiplication, Division */

# include <stdio.h>

void main()
{
    float Num1,Num2;

    printf("Enter Number 1: ");
    scanf("%f",&Num1);

    printf("Enter Number 2: ");
    scanf("%f",&Num2);

    printf("Addition: %0.0f \nSubstraction: %0.0f \nMultiplication: %0.0f \nDivision: %f",Num2+Num1,Num2-Num1,Num1*Num2,Num2/Num1);
}