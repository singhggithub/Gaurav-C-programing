#include<stdio.h> 

int main(){
     int principal , rate , year ;
     int simpleintrest= (principal*rate*year)/100;
     printf("value of principal is \n ");
     scanf("%d",&principal);
      printf("value of rate is \n ");
     scanf("%d",&rate);
      printf("value of year is \n ");
     scanf("%d",&year);
     printf("Therefor simpleintrest is %d",(principal*rate*year)/100);
     return 0;
}