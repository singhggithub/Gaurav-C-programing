#include<stdio.h> 

int main(){
     int x=2, y=3, z=3, k=1;
     int result = 3*x / y-z+k;
     // we have to evaluate this problem step by step
     //   3*2/3-3+1
     //as per operator priority first priority is give to * and / then +,- and it is solved from
     // left to right direction by the compiler 
     // so 6 /3 -3+1 
     //2-3+1
     // -1+1
     //0
     //hence answer is evaluated
     printf(" therefor result is %d \n",result);
     return 0;
}