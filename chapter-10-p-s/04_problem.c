#include<stdio.h>

int main(){
    FILE *ptr;
    char name1[34], name2[43];
    int salary1, salary2;
    ptr = fopen("harry.txt","r");

    printf("enter the name of employee\n");
    scanf("%s",&name1);

    printf("enter the salary of employee\n");
    scanf("%d", &salary1);
      printf("enter the name of employee\n");
    scanf("%s",&name2);

    printf("enter the salary of employee\n");
    scanf("%d", &salary2);

    return 0;
}