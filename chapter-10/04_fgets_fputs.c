#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry.txt","a");
    fputc('c',ptr);
    return 0;
}