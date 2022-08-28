#include<stdio.h>
// code To print multiplication table of any number
int main(){
int i=1,sum=0;
int n;
printf("Enter value of number n \n");
scanf("%d",&n);
printf("***Multiplication table of Number n \n");
for (i;i<11;i++ ){
    printf("%d x %d = %d \n",n,i,i*n);
   
} 
return 0;
}