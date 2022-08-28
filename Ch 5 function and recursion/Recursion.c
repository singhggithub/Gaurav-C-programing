#include<stdio.h>
int factorial (int n);
int main(){
    
// Time stem 6:23
int a = 8;
printf("the value of factorial %d is %d",a, factorial(a));
     return 0;
}
int factorial (int n){
    int f; 
    if (n==0 || n == 1){
    return 1;}   
else {
    f=factorial(n-1)*n;
    return f;
}}