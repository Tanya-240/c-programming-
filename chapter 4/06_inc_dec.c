#include<stdio.h>
int main()
{
    int i = 5;
    printf("the value of i is %d\n",i);

    i = i + 5;
    printf("the value of i is %d\n",i);
    ++i;
    printf("the value of i is %d\n",i);
    i--;
    printf("the value of i is %d\n",i);
    return 0;
//i++ prints frist then increments
//++i increments first then prints
//i-- prints first then decrements
//--i decrements first then prints
i +=2;
// same as i = i + 2
printf("the value of i is %d\n",i);

}