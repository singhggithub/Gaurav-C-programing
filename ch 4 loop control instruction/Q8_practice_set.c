#include<stdio.h>
int main(){
int i =1;
int n =10;
int fact=1;  // here we take factorial = 1 because if we take it 0 then 0xi = 0 so every number will become 0
for(i;i<=n;i++){
    fact*=i;              // this is formula for factorial factorial = factorial*i   
}
printf("The factorial of number %d is %d \n",n,fact);
     return 0;
}