#include<stdio.h>
// time stem 13:36
int main(){
FILE*ptr;

ptr = fopen("fputs.demo.txt","w");

putc('G',ptr);
putc('a',ptr);
putc('u',ptr);
putc('r',ptr);
putc('a',ptr);
putc('v',ptr);

fclose(ptr);

     return 0;
     
}