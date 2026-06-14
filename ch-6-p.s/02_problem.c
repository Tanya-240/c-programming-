#include<stdio.h>
int returning_5(int* ptr){
    printf("the value of ptr is %d",ptr);
    printf("the value at ptr is %d",*ptr);
}
int main(){
    int i = 2; 
    int* ptr = &i;
    printf("the add pf i is %u\n",&i);
    returning_5(ptr);
    
    return 0;
}