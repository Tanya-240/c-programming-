#include<stdio.h>
float converter(float c){
    float f;
    f = (c*9)/5+32;
    return f;
}

int main(){
    float cel;

    printf("enter the vale of celsius:");
    scanf("%f",&cel);
    converter(cel);
    printf("the fahrenit value is %.2f",converter(cel));
    
    return 0;
}