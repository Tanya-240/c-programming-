#include<stdio.h>
float weight(float z){
    float w ;
    float g;
    g = 9.8;
    w = z*g;
    return w;
}

int main(){
    float mass;
    printf("enter the mass :");
    scanf("%f",&mass);
    weight(mass);
    printf("the weight of the body is %.2f",weight(mass));
    return 0;
}