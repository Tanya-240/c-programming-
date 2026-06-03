#include<stdio.h>

int main(){
    for(int i = 0; i<=15; i++)
    {
        if(i == 5){
           // break; // exit the loop now
           continue; // skip the rest of the loop and continue with the next iteration
        }
        printf("%d\n",i);
    }
    printf("for loop is ended now\n");
    return 0;
}