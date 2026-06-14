#include<stdio.h>
int sum(int , int);//functibnon prototype
//function ki definition
int sum(int x , int y){
    //printf("the sum is %d\n",x+y);
    return x+y;
}

int main(){
    int a = 1; 
    int b = 2;
   int c = sum(a, b);
   printf("%d\n",c);

   int e = 8;
   int d = 9;
   sum(c,d);

    return 0;
}