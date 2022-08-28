#include<stdio.h>
//substraction of one pointer from other
int main(){
int a =5;
int *ptr = &a;
int b =8;
int*point=&b;
printf("value of Two pointers are %u and %u\n",ptr,point);
int d = ptr-point;         // substracting two pointers
printf("the substitution of two pointer is %u\n",d);

ptr=point;
printf("comparision to make ptr and point %u = %u",ptr,point);
     return 0;
}