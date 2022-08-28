#include<stdio.h>
// time stem 8:00
int main(){
int a=5;
int*pointer=&a;
printf("address of variable a is  %u \n",pointer );
printf("Value of variable a is %u \n",*pointer);
     return 0;
}