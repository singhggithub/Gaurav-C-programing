#include<stdio.h>
#include<string.h>      // to use strcpy() we should use this header file
// time stem 10:44
int main(){
char* str = "Gaurav";
char st[50];
strcpy(st,str);
printf("Now the st is %s",st);
     return 0;
}