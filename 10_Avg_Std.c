/* Write a program that accept Three numeric value from user and print Average out of it */

# include <stdio.h>

void main()
{
    int Age1,Age2,Age3;
    float Avg;

    printf("Enter Student Age 1: ");
    scanf("%d",&Age1);

    printf("Enter Student Age 2: ");
    scanf("%d",&Age2);

    printf("Enter Student Age 3: ");
    scanf("%d",&Age3);

    Avg=(Age3+Age2+Age1)/3;

    printf("Average: %f",Avg);
}