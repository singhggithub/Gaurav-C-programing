#include<stdio.h> 
// to find if a year is leap year we just had to check if the year is divisible by 4 by 
//using % like year%==0
int main(){
     int year;
     printf("Enter the year\n");
     scanf("%d",&year);
     if(year%4==0){
printf("It is a leap year \n");
     }
     else{
printf("the year is not a leap year");
     }
     return 0;
}