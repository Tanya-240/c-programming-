#include<stdio.h>
typedef struct  c
{
    int real;
    int img;
}complex;
complex display(complex c){
    printf("the value of complex is %d + %di",c.real,c.img);
}

int main(){
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
          printf("enter real part\n");
    scanf("%d",&carr[i].real);
    printf("enter img part\n");
    scanf("%d",&carr[i].img);
    display(carr[i]);
    }
    
   
    return 0;
}