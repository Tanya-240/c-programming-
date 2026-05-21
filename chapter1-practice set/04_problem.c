#include<stdio.h>
int main()
{
    int principle;
    float year,rate,si;
    printf("enter the value of principle, year, rate");
    scanf("%d %f %f",&principle,&year,&rate);
    printf("the value of principle, year,rate: %d %.2f %.2f",principle,year,rate);
    si = (principle*rate*year)/100;
    printf("the simple intrest is : %.2f",si);
    return 0;
} 