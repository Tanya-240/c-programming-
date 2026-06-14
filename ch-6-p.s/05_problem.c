#include<stdio.h>

int* sum(int a, int b){
    int c = a + b;
    int* ptr = &c;
    printf("the sum is %d\n",c);
    return ptr;

}
float* average(int a , int b){
    float avg =(a+b)/2.0;
    float* ptr = &avg;
    printf("the average is %f\n",avg);
    return ptr;
}

int main(){
    int x = 4; 
    int y = 6; 
    int* ptr1;
    float* ptr2;
   ptr1 =  sum(x,y);
    ptr2 =average(x,y);

    printf("the add of sum is %u and of avg is %u",ptr1,ptr2);

    
    return 0;
}