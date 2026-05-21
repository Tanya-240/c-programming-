#include<stdio.h>

int main(){
    
    int a = 1;int b = 7;
    printf("the value of a and b is %d\n",a&&b);
     printf("the value of a and b is %d\n",a||b);
     printf("the value of a and b is %d\n",!a);
    //! this operator convert true into false and false into true
    
    
    if(a&&b)
    {
    printf("both are true\n");
    }
    //is same as writing...
    if(a)
    {
        if(b)
        {
            printf("both are true");
        }
    }
    return 0;
}