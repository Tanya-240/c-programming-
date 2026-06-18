#include<stdio.h>
typedef struct employee{
    int salary;
    float score;
}emp;


int main(){
    emp e1;
    emp* ptr1 = &e1;

    ptr1->salary = 56;
    ptr1->score= 78;
    printf("the value of salary is %d and the value of score is %f",ptr1->salary,ptr1->score);
    return 0;
}