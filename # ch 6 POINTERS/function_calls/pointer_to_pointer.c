#include<stdio.h>
int main(){
int i =5;
int * ptr;
int** ptr_ptr;
ptr =&i;
ptr_ptr=&ptr;
printf("Value of i is %d \n",**ptr_ptr);
     return 0;
}