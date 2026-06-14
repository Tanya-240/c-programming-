#include<stdio.h>
int sum(int n){
    int r ;
    r = n*(n+1)/2;
    return r;
}
int main(){
    int num;
    printf("enter the value :");
    scanf("%d",&num);
    sum(num);
    printf("the sum of first n numbers is :%d",sum(num));
    
    return 0;
}