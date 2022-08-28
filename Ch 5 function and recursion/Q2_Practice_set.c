#include<stdio.h>
// to do by yourself
int temp(int c);
int main(){
int c =5;
printf("celcius %d to farenhit %d \n",c,temp(c));
     return 0;
}
int temp(int c){
     int f;
     return f=(c*9/5)+32; 
}