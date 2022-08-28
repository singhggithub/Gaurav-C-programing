#include<stdio.h> 

int main(){
    // time on code with harry c language is 3:43 min for this code
     float tax=0 , income;
     printf("Enter your income \n");
     scanf("%f",& income);
     if(income>=250000 && income<=500000){
    tax= tax+0.05* (income-250000);
     }
     if(income>=500000 && income<=1000000){
         tax=tax +0.2*(income-500000);
     }
     if(income>=1000000){
         tax= tax+0.3 *(income-1000000);
     }
     printf("the income tax to be paid is %f \n",tax);
     return 0;
}