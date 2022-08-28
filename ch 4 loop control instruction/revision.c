#include<stdio.h>
int main(){
int n = 2;
int i=2;
int nonprime = 0;
for(i;i<n;i++){
  if(n%i==0)
  nonprime++;
}
if (nonprime != 0){
  printf("its not a prime number \n");
}
else {
  printf("its a prime number \n");
}
   return 0;
}