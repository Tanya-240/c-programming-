#include<stdio.h>

int main(){
    if(1)
    {
        printf("this if is executed\n");

    }
    if(2345)
    {
        printf("this if is also excuted\n");
    }
    if('c')
    {
        printf("this if is also excuted\n");

    }
    if(0)
    {
        printf("i am zero i am not excuted\n");
    }
    return 0;
}
//if can only excute the non zero values it can't execute the 0 as it is shown