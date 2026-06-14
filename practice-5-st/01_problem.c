#include<stdio.h>
int avg(int a, int b, int c){
int f ;
f = (a+b+c)/3;
return f;
}

int main(){
    int x,y,z,c;
    printf("enter the value of x,yx,z:");
    scanf("%d %d %d",&x,&y,&z);
    c = avg(x,y,z);
    printf("the average value of 3 numbers is %d",c);

    return 0;
}