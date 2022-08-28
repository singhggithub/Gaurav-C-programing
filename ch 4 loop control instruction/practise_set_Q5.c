#include<stdio.h>
int main(){
int i=1;
int n=10;
int sum=0;
while(i<=n){
    sum +=i;
    i++;
}
printf("Sum of First 10 n natural numbers are :- %d \n",sum);
     return 0;
}