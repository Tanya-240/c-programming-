#include<stdio.h>

int main(){
    
    int age = 45;
    if(age>60)
{
    printf("you can drive and you are senior citizen");


}
else if(age>40)
{
    printf("you can drive and you are elder");

}
else if(age>18)
{
    printf("you can drive");
}
else
{
    printf("you can not drive");
}

    return 0;
}
//last else is optional
//there can be many number of else if