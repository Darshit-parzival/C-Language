/* Write a program that accept Kilometer from user and convert into Meter and Centimeter */

# include <stdio.h>

void main()
{
    int Km;

    printf("Enter Value Fehrenheit: ");
    scanf("%d",&Km);

    printf("%d Km = %d Meter and %d Meter = %d CM",Km,Km*1000,Km,Km*100);
}