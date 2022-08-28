#include <stdio.h>
int Sum(int n);
int main()
{

    int n;
    printf("Enter n natural number \n");
    scanf("%d", &n);
    printf("Sum of first %d natural number is %d \n", n, Sum(n));

    return 0;
}
int Sum(int n)
{  if (n==0){
       return 0;           // formula to calculate first n natural numbers by recursion
}
     else{
         return n + Sum(n-1);
     }
    
}