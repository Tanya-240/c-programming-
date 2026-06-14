#include<stdio.h>

int main(){
   // int a = 5;
   // int b = 9;
    //int *ptr = &a;
    char d = 'a';
    char *ptr = &d;
   // printf("the add of a is %u",&a);
    //printf("the add of a is %u",ptr);
    //printf("the add of a is %u",&b);
    //ptr++;
    //printf("the value of ptr is %u",ptr);
    printf("the add of a is %u",&d);
    ptr++;
    printf("the value  of ptr is %u",ptr);
    return 0;
}