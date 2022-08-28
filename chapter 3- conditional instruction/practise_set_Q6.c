#include<stdio.h> 

int main(){
     int num1, num2, num3, num4;
     printf("Enter value of number 1\n");
     scanf("%d",&num1);
     printf("Enter value of number 2\n");
     scanf("%d",&num2);
     printf("Enter value of number 3\n");
     scanf("%d",&num3);
     printf("Enter value of number 4\n");
     scanf("%d",&num4);
     if(num1>num2 && num1>num3 && num1>num4){
printf("Number 1 is the greatest of four numbers");
     }
     if( (num2>num1) && (num2>num3) && (num2>num4)) {
printf("Number 2 is the greatest of four numbers");
     }
     if((num3>num2)&&(num3>num4)&&(num3>num1)){
         printf("Number 3 is the greatest of four numbers");
     }
     if((num4>num2)&&(num4>num3)&&(num4>num1)){
 printf("Number 4 is the greatest of four numbers");
     }
     return 0;
}