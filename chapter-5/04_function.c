#include<stdio.h>

int change(int a){
    a = 77;
    return a;
}
int main()
{
    int b = 3;
   int c= change(b);
    printf("b is %d",c);//garbage value
    printf("b is %d",b);// 3
    return 0;
}