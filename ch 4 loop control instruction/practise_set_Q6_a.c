#include<stdio.h>
int main(){
int i=1;
//Q6 (a) by using for loop 
int sum=0;
int n;
printf("enter value of n \n");
scanf("%d",&n);

for (i;i<=n;i++){
    sum+=i;
}
printf("Sum of first ten n natural numbers are :- %d",sum);
     return 0;
}