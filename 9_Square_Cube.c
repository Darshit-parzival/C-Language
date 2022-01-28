/* Write a program that accept a numeric value from user and print Square and Cube */

# include <stdio.h>

void main()
{
    int Num;

    printf("Enter zaNumber: ");
    scanf("%d",&Num);

    printf("Square: %d \nCube: %d",Num*Num,Num*Num*Num);
}