#include<stdio.h>
#include<string.h>

int main(){
    char str[]="mai doggy jake cutie pie hai !!!";
    for(int i = 0 ; i < strlen(str); i++)
    {
        str[i] = str[i];
    }
    printf("%s",str);
    return 0;
}