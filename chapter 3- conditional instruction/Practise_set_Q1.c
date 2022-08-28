#include<stdio.h> 

int main(){
     int a =10;
     if(a=11){ // here a=11 not a==11 that is why it will print i am 11 even if int a=10
     // (because = is assingning sign and == means equals to)
         printf("I am 11 \n");
     }
     else{
         printf("i am not 11 \n");
     }
     return 0;
}