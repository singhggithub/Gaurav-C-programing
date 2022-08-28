#include<stdio.h>
#include<string.h>
// time stem 12:6
struct structure{
int code;
float salary;
char name[50];
};
int main(){
struct  structure e1;
struct structure*ptr;
ptr = &e1;


// (*ptr).code = 10;
   //or we can write
ptr->code =10;                          //   -> this is arrow operator


printf("%d",e1.code);
     return 0;
}