/* Write a program that accept Fehrenheit from user and convert into celsius */

# include <stdio.h>

void main()
{
    float Fehrenheit;

    printf("Enter Value Fehrenheit: ");
    scanf("%f",&Fehrenheit);

    printf("Celsius: %f", ((Fehrenheit-32)/1.8));
}