/* Write a program that accepts two numeric value from user and swap it */

# include <stdio.h>

void main()
{
    int num1,num2,temp;

    printf("Enter Value 1: ");
    scanf("%d",&num1);

    printf("Enter Value 2: ");
    scanf("%d",&num2);

    printf("\nBefore Swapping\n\n");

    printf("Value 1: %d",num1);
    printf("Value 2: %d",num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("\n\nAfter Swapping\n\n");
    printf("Value 1: %d",num1);
    printf("Value 2: %d",num2);
}