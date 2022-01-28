/* Write a program that can calculate difference between Compound Interest & Simple Interest*/

#include <stdio.h>
#include <math.h>

void main()
{
    float principle, rate, time, CI;

    printf("Compound Interest: \n");

    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    CI = principle* (pow((1 + rate / 100), time));

    printf("Simple Interest: \n");

    float r,p,n,i;

    printf("Enter Principle Amount: ");
    scanf("%d",&p);

    printf("Enter Rate of Interest: ");
    scanf("%f",&r);

    printf("Enter Number of Years: ");
    scanf("%f",&r);

    i=(p*r*n)/100;
   
    printf("\n\nDifference: %f",CI-i);
}