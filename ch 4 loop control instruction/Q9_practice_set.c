#include<stdio.h>
int main(){
int i =1;
int n =5;
int fact =1;
while(i<=n){
  fact*=i;
  i++;
}
printf("The factorial of number %d is %d",n,fact);
   return 0;
}