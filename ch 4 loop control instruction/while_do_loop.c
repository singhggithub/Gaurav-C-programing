#include<stdio.h>
int main(){
int i=0;
int n;
printf("input \n");
scanf("%d",&n);
do{
    printf("output %d\n ",i+1);
    i++;
}while(i<n);
     return 0;
}