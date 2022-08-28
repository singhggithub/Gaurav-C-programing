#include<stdio.h> 

int main(){
     int marks;
     printf("Enter the marks of student\n");
     scanf("%d",&marks);
     switch(marks){
         case 90:
         printf("The grade obtained by student is A \n");
         break;
         case 80:
         printf("The grade obtained by student is B \n");
         break;
         case 70:
         printf("The grade obtained by student is C \n");
         break;
         case 60:
         printf("The grade obtained by student is D \n");
         break;
         default:
         printf("the student has failed the exam");
         break;
     }
     return 0;
}