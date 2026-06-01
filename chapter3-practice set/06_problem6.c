#include<stdio.h>

int main(){
    int num1, num2,num3,num4;
    printf("enter the value of num1, num2,num3, num4:");
    scanf("%d %d %d %d", &num1, &num2,&num3, &num4);
    if(num1 > num2 && num1 > num3 && num1> num4)
    {
        printf(" the greatest number is num1: %d", num1);

    }
    else if(num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf(" the gretest number is num2 %d", num2);

    }
    else if(num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf(" the greatest number is num3 %d", num3);

    }
    else
    {
        printf(" the greatest number is num4 %d", num4);
    } 

    return 0;
}