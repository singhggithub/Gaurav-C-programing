#include<stdio.h>
// time stem 8:14 hr
int sumAndavg(int a, int b,int*sum,float*avg);
int main(){
    int i=2;
    int j=2;
    int SUM;
    float AVG;
    sumAndavg( i,j,&SUM, &AVG);
    printf("The value of sum is %d\n",SUM);
    printf("The value of avg is %f\n ",AVG);       // why %f instead of %u because we want decimle value of avg

     return 0;
} 
int sumAndavg(int a, int b, int*sum, float*avg){
    
     *sum = a+b;
*avg =(float) *sum/2;  