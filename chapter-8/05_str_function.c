#include<stdio.h>
#include<string.h>

int main(){
    char st[] = "harry";
    char a1[56] = "harry";
    char a2[56]  = "wuba";
   // printf("%d",strlen(st));
    char target[30];
    strcpy(target,st);
    //printf("%s %s",st,target);
    strcat(a1,a2);
    //printf("%s ",a1);
    
    int a = strcmp("far","ajoke");
    printf("%d",a);
    return 0;
}