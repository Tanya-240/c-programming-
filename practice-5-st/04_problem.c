#include<stdio.h>
int fibonacci(int n){
    if(n == 1 || n == 2)
    {
        return n-1;
    }
    int f = fibonacci(n-1)+fibonacci(n-2);
    return f;
}

int main(){ 
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    fibonacci(num);
    printf("the fibaonacci number is :%d",fibonacci(num));
    
    
    return 0;
}