#include<stdio.h>

int main(){
    char ch = 'a';
    printf("the character is %c\n",ch);
    printf("the value of character is %d\n",ch);
   // if(ch >= 'a' && ch <= 'z')
    if(ch >= 97 && ch <= 122)
    {
        printf("the character is in lower case\n");
    }
    else
    {
        printf("the character is not in lower case\n");
    }
    
    
    return 0;
}