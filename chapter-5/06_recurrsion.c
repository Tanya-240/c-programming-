#include<stdio.h>

int factorial(int x){
    int f;
    if(x == 0 || x == 1){
        
        return 1;
    }
    else{
        f = factorial(x-1)*x;
   
        return f;
    }
}


int main(){
    int a;
    printf("the value of a is :");
    scanf("%d",&a);
    printf("the value of a is %d\n",a);
    factorial(a);
    printf("the factorial of %d is %d\n",a,factorial(a));
    
    return 0;
}