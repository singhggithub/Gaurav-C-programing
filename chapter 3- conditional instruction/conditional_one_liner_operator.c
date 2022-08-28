#include<stdio.h> 

int main(){
     int a;
     printf("enter value of a\n");
     scanf("%d",&a);
     (a<10) ? printf("a is smaller than 10\n") : printf("a is greater than 10\n");
     // call this one liner operator you cannot use this in long code
     return 0;
}