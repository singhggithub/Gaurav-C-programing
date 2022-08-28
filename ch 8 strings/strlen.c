#include<stdio.h>
#include<string.h>      // to use strlen() we should use this header file
int main(){
// Time stem 10:41
char *str="gaurav";
int a = strlen(str);     // it wil count the length string that how many character are in it but does not count \0 (null character)
printf("The length of string st is %d ", a);
     return 0;
}