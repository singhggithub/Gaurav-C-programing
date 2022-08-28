#include<stdio.h>
int main(){
    int a=3;
printf("%d%d%d \n",a,++a,a++); // in gcc compiler will go from a++ to ++a to a and the value will be added in that sense
                               // because gcc copiler goes from right to left while calculating value
     return 0;
}