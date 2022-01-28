/* Write a program that accept Liter value from User that can convert into Militer*/

# include <stdio.h>

void main()
{
    int ltr;

    printf("Enter Amount of Liter: ");
    scanf("%d",&ltr);

    printf("\nMiliter: %d",ltr*1000);
}