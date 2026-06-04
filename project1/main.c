#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    srand(time(0));
 int guessed;
   int  no_of_guesses= 0;
    int randomnumber = (rand()%100) + 1;

    //printf("random number : %d\n", randomnumber);
do{
    printf("guess the number");
    scanf("%d",&guessed);
    if(guessed > randomnumber)
    {
        printf("lower number pls \n");
    }
    else if (randomnumber<guessed)

    {
         printf("higher number pls\n");
    }
    
    else
    {
        printf("congrats\n");
    }
no_of_guesses++;
    
    } while (guessed != randomnumber);
    printf("you guessed the number in %d guesses", no_of_guesses);
    

    return 0;
}