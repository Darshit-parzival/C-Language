/* Write a program that can calculate Simple Interest */

# include <stdio.h>

void main()
{
    float r,p,n,i;

    printf("Enter Principle Amount: ");
    scanf("%d",&p);

    printf("Enter Rate of Interest: ");
    scanf("%f",&r);

    printf("Enter Number of Years: ");
    scanf("%f",&r);

    i=(p*r*n)/100;
   
    printf("Simple Interest: %f",i);
}