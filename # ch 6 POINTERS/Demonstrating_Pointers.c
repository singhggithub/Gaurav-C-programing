#include<stdio.h>
int main(){
int i =8;
int * j ;
j =&i;
printf("Address i = %u \n ",&i);
printf("Address i = %u \n ",j);
printf("Address j = %u \n ",&j);
printf("value i = %d \n ",i);
printf(" value of i = %d \n ",*(&i));
printf("value i = %d \n ",*j);

     return 0;
}