#include<stdio.h>
int fib(int n);
int main(){
int n = 6;
printf("The %dth number of fibionacci series is %d",n,fib(n));
     return 0;
}
int fib(int n){
    if(n==0){   
        return 0;    // we used if() statement two times because there are to recurssion i.e int fib() function is used twice 
                                                                                                 //in the function definition
    }
     if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2); // formula for fibionacci series 
    }
}