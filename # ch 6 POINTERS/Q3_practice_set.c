#include<stdio.h>
//// ????? I HAVE TO TRY IT BY MYSELF, THIS CODE IS TAKEN FROM INTERNET
int change(int *Ptr)
{return *Ptr *=10;
} 

int main()
{
    
    int a=5;
   int *b=&a;
    printf("the current value of a is =%d\n",a);
    
    change(b);
    printf("now,the value of a is =%d \n",*b);
    return 0;
}