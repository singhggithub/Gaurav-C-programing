#include<stdio.h>
void change(int ptr){
     ptr*=10;
}
int main(){
int a=5;
int b = a;
printf("The value of a is %d \n",a);
change(b);
printf("now The value of a is %d \n",b);
     return 0;}

     // we used call by value that is why value does not changed 