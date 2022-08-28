#include<stdio.h>
//time stem 11:8

int strlen(char*st){
    char *ptr=st;
    int len =0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main(){
char st[]= "Gaurav";
int l = strlen(st);
printf("The length of this string is %d",l);
     return 0;
}