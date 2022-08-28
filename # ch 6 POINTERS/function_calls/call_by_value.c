#include<stdio.h>
//time stem 7:34
int sum(int a, int b);
int main(){
int x=5 ,y=5;
printf("The sum of a and b is %d \n",sum(x,y));
     return 0;
}
int sum(int a, int b){
    return a + b;
}