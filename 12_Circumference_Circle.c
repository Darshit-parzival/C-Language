/* Write a program that can calculate Circumference of Circle */

# include <stdio.h>

void main()
{
    float Radius;
    const float pi=3.14;

    printf("Enter Value of Radius: ");
    scanf("%f",&Radius);

    printf("Circumference of Circle: %f",2*(pi*Radius));
}