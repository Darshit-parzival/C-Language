/* Write a program that accept Kilogram from user and convert into Gram */

# include <stdio.h>

void main()
{
    float Kl;

    printf("Enter Value Kilogram: ");
    scanf("%f",&Kl);

    printf("Gram: %0.0f",Kl*1000);
}