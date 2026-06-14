#include<stdio.h>
int sum(int* a,int* b)
{
    *a = 6;
 return *a + *b;
}

int main(){
    int x = 1, y = 6;
    printf("the sum of is %d\n", sum(&x,&y));
    printf(" the value of x is %d",x);
    
    
    return 0;
}