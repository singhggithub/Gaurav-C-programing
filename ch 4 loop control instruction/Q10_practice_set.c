#include<stdio.h>
int main(){
int n =3;
int i = 2; // any number divisible by 2 is not a prime number
int nonprime =0;
for(i;i<n;i++){
    if(n%i==0){
 nonprime++;
    }
}
if(nonprime != 0){
    printf("its not a prime number");
}
else{
    printf("Its a prime number");
}
     return 0;
}