#include<stdio.h>
// time stem 10:16
int main(){
char str[]= {'G','a','u','r','a','v','\0'};
// or we can do this
char strg[]="Gaurav";  // just write in "" like this "Gaurav"

     printf("%c%c%c%c%c%c \n",str[0],str[1],str[2],str[3],str[4],str[5]);

     printf("%c%c%c%c%c%c",strg[0],strg[1],strg[2],strg[3],strg[4],strg[5]);
     return 0;
}