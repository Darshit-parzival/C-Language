/* Write a program that can calculate Area of Circle */

# include <stdio.h>

void main()
{
    float Radius,Area_Circle;
    const float pi=3.14;

    printf("Enter Value of Radius: ");
    scanf("%f",&Radius);

    Area_Circle=pi*(Radius*Radius);

    printf("Area of Circle: %f",Area_Circle);
}