#include<stdio.h>
// time stem 7:45
void swap(int*a,int*b);
int main(){
int x =4;
int y = 5;
printf("The value of x and y is %d and %d \n",x,y);
swap(&x,&y);
printf("The value of x and y is %d and %d \n",x,y);
     return 0;
}
void swap(int*a,int*b){
    int temp;
    temp= *a;                    // int 'a' and 'b' is pointer and to find value at pointer we use *
    *a=*b;                     
    *b=temp;
    
}
