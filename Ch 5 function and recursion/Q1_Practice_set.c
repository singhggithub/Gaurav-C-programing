#include<stdio.h>
// time stem 6:39
float average(int a, int b, int c); // we used float in function because we have to find average and its value will be in decimile
int main(){

int x,y,z;   // we can take it int a b c also because its not the same value in both function every function have there own local function

printf("Enter the value of x\n");
scanf("%d",&x);
printf("Enter the value of y \n");
scanf("%d",&y);
printf("Enter the value of z \n");
scanf("%d",&z);
printf("The value of average is %f", average(x,y,z));
     return 0;
}
float average(int a, int b, int c){
   float result;
  result =  (float)(a+b+c)/3; // because all a b c are int and we want value in float or decimle
   return result;
}