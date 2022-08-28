#include<stdio.h>
int main(){
int i = 1;
int n = 8;           // n is multiplication table of 8
int sum =0;
for(i;i<=10;i++){
    n = 8*i;       // this is multiply table
    sum+=n;        // this means sum = sum + n where n is n =8*i so it becomes sum of 8 table
}printf("sum of numbers %d \n",sum);
     return 0;
}