#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    // time stem 5:27
    //Project 1 Question page on 5:38:58 hr 
int number,guess, nguess=1;
srand(time(0));
number=rand() %100 +1; // %100+1 it will help to generate random number from 1 to 100 only
printf("the number is %d \n",number);

do{
printf("Guess number between 1 to 100 \n\n");
scanf("%d",&guess);
if (guess>number){
    printf("lower number please ! \n\n");
}
else if (guess<number){
    printf("Higher number please \n\n");
}
else{
    printf("You guessed it in %d attemps \n\n",nguess);
}
nguess++;
}while(guess!=number);

     return 0;
}