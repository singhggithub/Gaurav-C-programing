#include<stdio.h>
int main(){
// factorial of 5 is 1 x 2 x 3 x 4 x 5
//factorial of 6 is 1x2x3x4x5x6 similarly factorial of any number is found like this
int i=1, factorial=1;
int n;
printf("Enter value of n number to get its factorial \n");
scanf("%d",&n);
for (i;i<=n;i++){
    factorial*=i;
}
printf("Factorial of %d is :- \n [%d]",n,factorial);

     return 0;
}