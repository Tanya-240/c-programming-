 #include<stdio.h>
 #include<math.h> 
 
 int main(){
    int a = 4;
    int b = 3;
    int c = a + b ;
    printf("the value of a is %d and value of b is %d and sum is %d",a,b,c);
    //modulus operator is used to get the remainder 
    printf("the remainder when a is divided by b is %d \n", a%b);
    // this doesmn't work for exponentiation in c
    // int d = a ^ b;
    int d = pow(a,b);
    printf("the exponentiation of a and b is %d",d);
    


    return 0;
 }