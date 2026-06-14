#include<stdio.h>

int main(){
    char i = 'A';
    char* j = &i;


    float k = 5.232;
    float* k1 = &k;
    printf("the address od i is %p\n",&i);
    printf("the address od i is %p\n",j);
    printf("the address od k is %p\n",*(&k));

    printf("the value at address j is %d\n",*(&i));
    return 0;
}