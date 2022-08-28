#include<stdio.h>
int main(){
int a=5;
int*ptr=&a;
// 1st operation
printf("The value of ptr is %u\n",ptr);
ptr= ptr +5 ;  // adding ptr with one number // we can also use ptr++ if we only want to add 1 because as we know ptr++ means ptr+1
printf("The value of added ptr is %u\n",ptr);

// second operation
int b=8;
int*sub=&b;
printf("The value of sub is %u \n",sub);
sub= sub -5;
printf("The value of sub after substitution is %u \n",sub);

// third operation
int substraction = ptr-sub;
printf("The substraction of pointer ptr(%u) and sub(%u) is %u \n",ptr,sub,substraction);

// Fourth operation
ptr=sub;
printf("The comaprision of two pointer variable ptr(%u)=sub(%u)\n",ptr,sub);
     return 0;
}