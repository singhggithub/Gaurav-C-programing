#include<stdio.h>
#include<string.h>      // to use strcpy() we should use this header file
// time stem 10:46
int main(){
char str1[50] = "hello ";   // to bring space between str1 and str2 i have to put space after "hello " like this
char* str2 = "Gaurav";
strcat(str1,str2);
printf("Now the str1 is %s",str1);
     return 0;
}