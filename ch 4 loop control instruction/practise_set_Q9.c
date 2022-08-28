#include<stdio.h>
int main(){
int i=1, factorial=1;
int n;
printf("Enter value of n \n");
scanf("%d",&n);
while(i<=n){
   
   factorial*=i;
    i++;
}
 printf("Factorial of %d is :- \n [%d]",n,factorial);
     return 0;
}