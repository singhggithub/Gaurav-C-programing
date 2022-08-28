#include<stdio.h>
int main(){
int  prime=1,n;
printf("Enter value of n \n");
scanf("%d",&n);
for(int i=2;i<n;i++){
    if(n%i==0){
        prime=0;
        break;
        
    }
    }
    if(prime==0){
        printf("this is not a prime number\n");
        
    }
    else{
        printf("Its a prime number \n");
      
    }
     return 0;
}