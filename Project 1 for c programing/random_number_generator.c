#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    // time stem 5:27
int number;
srand(time(0));
number=rand() %500 +1; // %100+1 it will help to generate random number from 1 to 100 only
printf("the number is %d \n",number);

     return 0;
}