#include<stdio.h>
int main(){
int i=0;
int n;
printf("input\n");
scanf("%d",&n);
do{
     printf("output %d \n",i+1); // here i+1 is used to start 0utput from 1 instead of 0
     i++;
}
while (i<n);

      return 0;
}