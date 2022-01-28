/* Write a program that accept Dollar currency from user and convert into Pound */

# include <stdio.h>

void main()
{
    float Dollar;

    printf("Enter Dollar: ");
    scanf("%f",&Dollar);

    printf("Pound: %f", Dollar/2);
}