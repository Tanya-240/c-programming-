#include<stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d",a,++a,a++);
   // 6 6 4// evalution order right to left auto by compiler
    
    return 0;
}