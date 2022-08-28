#include<stdio.h> 

int main(){
     int principal,year, rate;
     int simpleintrest =(principal*rate*year)/100;
     printf("enter principal \n");
     scanf("%d",&principal);
      printf("enter year \n");
     scanf("%d",&year);
      printf("enter rate \n");
     scanf("%d",&rate);

     printf("The simple intrest is%d\n",(principal*rate*year)/100);
     return 0;
}